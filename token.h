//
//  token.hpp
//  lab2.1
//
//  Created by Jung Choi on 5/16/20.
//  Copyright © 2020 Jung Choi. All rights reserved.
//

#ifndef token_h
#define token_h

#include <stdio.h>
#include <string>
#include <map>

using namespace std;

enum tokType {COMMA,PERIOD,Q_MARK,LEFT_PAREN,RIGHT_PAREN,COLON,COLON_DASH,
                MULTIPLY,ADD,SCHEMES,FACTS,RULES,QUERIES,ID,STRING,COMMENT,WHITESPACE,
                UNDEFINED,END};

class token
{
public:

    token(tokType t, string v, int l):type(t),value(v),line(l)
    {
        mapOfToks[COMMA] = "COMMA";
        mapOfToks[PERIOD] = "PERIOD";
        mapOfToks[Q_MARK] = "Q_MARK";
        mapOfToks[LEFT_PAREN] = "LEFT_PAREN";
        mapOfToks[RIGHT_PAREN] = "RIGHT_PAREN";
        mapOfToks[COLON] = "COLON";
        mapOfToks[COLON_DASH] = "COLON_DASH";
        mapOfToks[MULTIPLY] = "MULTIPLY";
        mapOfToks[ADD] = "ADD";
        mapOfToks[SCHEMES] = "SCHEMES";
        mapOfToks[FACTS] = "FACTS";
        mapOfToks[RULES] = "RULES";
        mapOfToks[QUERIES] = "QUERIES";
        mapOfToks[ID] = "ID";
        mapOfToks[STRING] = "STRING";
        mapOfToks[COMMENT] = "COMMENT";
        mapOfToks[WHITESPACE] = "WHITESPACE";
        mapOfToks[UNDEFINED] = "UNDEFINED";
        mapOfToks[END] = "EOF";
    }
    token(){}
    ~token(){}
    tokType type;
    string value;
    string print();
    string lineToString();

private:


    int line;
    map<tokType, string> mapOfToks;
};


#endif /* token_hpp */
