//
//  scanner.hpp
//  lab2.1
//
//  Created by Jung Choi on 5/16/20.
//  Copyright © 2020 Jung Choi. All rights reserved.
//

#ifndef scanner_h
#define scanner_h

#include <stdio.h>

//#ifndef SCANNER_H_
//#define SCANNER_H_
#include "token.h"
#include <fstream>
#include <vector>

class scanner
{
public:
    scanner(){}
    ~scanner(){}
    void scan(string fileName);
    void scanToken();
    void scanID();
    void scanStr();
    void scanComm();
    void makeToken(tokType type, int lineNum);
    void valueToUpper();
    vector<token> getVector();

private:
    ifstream inputFile;
    ofstream outputFile;
    int line = 1;
    char curr;
    char next;
    string value = "";
    string valueUpper = "";
    int lineStart = 0;
    vector<token> myVector;
};


#endif /* scanner_hpp */
