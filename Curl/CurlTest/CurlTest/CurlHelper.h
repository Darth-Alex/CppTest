//
//  CurlHelper.h
//  CurlTest
//
//  Created by Alexander Rummel on 19.11.13.
//  Copyright (c) 2013 Alexander Rummel. All rights reserved.
//

#ifndef __CurlTest__CurlHelper__
#define __CurlTest__CurlHelper__

#include <iostream>
#include <sstream>
#include <curl/curl.h>

#endif /* defined(__CurlTest__CurlHelper__) */

class CurlHelper
{
public:
    static std::string GetPageContentByUrl(std::string url);
};