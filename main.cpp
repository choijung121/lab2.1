//
//  main.cpp
//  lab2.1
//
//  Created by Jung Choi on 5/16/20.
//  Copyright © 2020 Jung Choi. All rights reserved.
//

#include "parser.h"

int main(int argc, char* argv[])
{
    parser myParser(argv[1]);
    myParser.parse();

    return 0;
}
