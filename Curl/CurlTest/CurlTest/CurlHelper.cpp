//
//  CurlHelper.cpp
//  CurlTest
//
//  Created by Alexander Rummel on 19.11.13.
//  Copyright (c) 2013 Alexander Rummel. All rights reserved.
//

#include "CurlHelper.h"


size_t write_data(char *ptr, size_t size, size_t nmemb, void *userdata)
{
    std::ostringstream *stream = (std::ostringstream*)userdata;
    size_t count = size * nmemb;
    stream->write(ptr, count);
    return count;
}

std::string CurlHelper::GetPageContentByUrl(std::string url)
{
    std::ostringstream stream;
    CURL *curl = curl_easy_init();
    CURLcode res;
    
    curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &stream);
    
    res = curl_easy_perform(curl);
    
    if(res == CURLE_OK)
    {
        std::string result = stream.str();
        //std::cout << result;
        curl_easy_cleanup(curl);
        return result;
    }
    else
    {
        return "Fehler beim abrufen der URL. curl_easy_perform() failed!";
    }

}