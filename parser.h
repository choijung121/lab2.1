//
//  parser.hpp
//  lab2.1
//
//  Created by Jung Choi on 5/16/20.
//  Copyright © 2020 Jung Choi. All rights reserved.
//

#ifndef parser_hpp
#define parser_hpp

#include <stdio.h>
#include "scanner.h"
#include "scheme.h"
#include "datalogProgram.h"

class parser
{
public:
    parser(string inputFile)
    {
        lexer.scan(inputFile);
        tokenList = lexer.getVector();
        tok = tokenList[0];
        tokenList.erase(tokenList.begin());
    }
    ~parser(){}
    void parse();
    token getToken();
    void match(tokType t);
    void error();
    void toString();
    void parseScheme();
    void parseSchemeList();
    void parseFactList();
    void parseFact();
    void parseRuleList();
    void parseRule();
    predicate headPredicate();
    predicate parsePredicate();
    vector<predicate> parsePredicateList();
    parameter parseParameter();
    vector<parameter> parseParameterList();
    string parseExpression();
    string parseOperator();
    void parseQuery();
    void parseQueryList();
    vector<string> idList();
    vector<string> stringList();
    token tok;

private:
    vector<token> tokenList;
    datalogProgram program;
    scanner lexer;

};


#endif /* parser_hpp */
