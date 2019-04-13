//
// Created by Dayrabekov Artem on 2019-04-13.
//

#ifndef EX04_FUNCTIONS_HPP
#define EX04_FUNCTIONS_HPP
#include "../inc/Num.hpp"
#include "../inc/Op.hpp"
#include "../inc/Par.hpp"
#include <queue>
#include <iostream>
#include <sstream>

std::queue<Token *> makePolish(std::queue<Token *> tokens);
std::queue <Token*> makeTokens(std::string str);
void print_queue(std::queue<Token *> q);
int evaluatePolish(std::queue <Token *> tokens);
#endif //EX04_FUNCTIONS_HPP
