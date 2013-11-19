//
//  main.cpp
//  CurlTest
//
//  Created by Alexander Rummel on 19.11.13.
//  Copyright (c) 2013 Alexander Rummel. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <curl/curl.h>
#include "CurlHelper.h"



int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";

    std::cout << CurlHelper::GetPageContentByUrl("www.apple.de");

    
    return 0;
}

