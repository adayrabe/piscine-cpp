//
// Created by Dayrabekov Artem on 2019-04-01.
//
#include "Fixed.class.hpp"
#include <sstream>

void evalExpr(std::string str)
{
    std::stringstream ss(str);
    std::string res;

    while (ss >> res)
        ;
    std::cout << res << std::endl;
}
