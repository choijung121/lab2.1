//
//  datalogProgram.hpp
//  lab2.1
//
//  Created by Jung Choi on 5/16/20.
//  Copyright © 2020 Jung Choi. All rights reserved.
//

#include <stdio.h>
#ifndef DATALOGPROGRAM_H_
#define DATALOGPROGRAM_H_
#include <vector>
#include "scheme.h"
#include "rule.h"

using namespace std;

class datalogProgram
{
public:
    datalogProgram(){}
    ~datalogProgram(){}
    void addScheme(scheme s);
    void addFact(scheme f);
    void addRule(rule r);
    void addQuery(predicate p);
    void makeDomain();
    string toString();


private:
    vector<scheme> schemesList;
    vector<scheme> factsList;
    vector<string> domain;
    vector<rule> rulesList;
    vector<predicate> queryList;
    string intToString(int);
};



#endif /* DATALOGPROGRAM_H_ */

//#endif /* datalogProgram_hpp */
