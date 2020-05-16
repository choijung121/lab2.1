//
//  token.cpp
//  lab2.1
//
//  Created by Jung Choi on 5/16/20.
//  Copyright © 2020 Jung Choi. All rights reserved.
//

#include "token.h"
#include <sstream>

using namespace std;

string token::print()
{
    string output;
    output = "(" + mapOfToks[type] + ",\"" + value + "\"," + lineToString() + ")";
    return output;
}

string token::lineToString()
{
    stringstream convert;
    convert << line;
    string lineNum = convert.str();
    return lineNum;
}
