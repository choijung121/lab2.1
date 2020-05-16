//
//  scheme.hpp
//  lab2.1
//
//  Created by Jung Choi on 5/16/20.
//  Copyright © 2020 Jung Choi. All rights reserved.
//

#ifndef scheme_h
#define scheme_h
#include <stdio.h>
#include <string>

using namespace std;

class scheme
{
public:
    scheme(string n)
    {
        name = n;
    }
    ~scheme(){}
    string name;
    vector<string> parameterList;
    void addParameter(string param)
    {
        parameterList.push_back(param);
    }
    void addParameter(vector<string> params)
    {
        parameterList.insert(parameterList.end(),params.begin(), params.end());
    }

    string toString()
    {
        string output;
        output = name + "(";
        for(int i = 0; i < parameterList.size()-1; i++)
        {
            output = output + parameterList[i] + ",";
        }
        output += parameterList[parameterList.size()-1] + ")";

        return output;
    }

};



#endif /* scheme_hpp */
