/**
* @file utils.h
* @brief  Week 10, C++ Review and Warmup from CSI140
*
* @author Raymond Zheng
* @assignment Lecture 10.1
* @date 11/11/2020
* @credits
* 
*/
//header guard
#ifndef UTILS_H

#define UTILS_H
//forward declaration
#include <vector>
#include <string>
using namespace std;

/**
* @brief returns random element in vector
* @date 11/10/2020
* @param vector<string> vec, the vector to evaluate
* @return random string
*/
string randomElement(vector<string> vec);

/**
* @brief returns sum of doubles in vector
* @date 11/10/2020
* @param vector<double> vec, the vector to evaluate
* @return sum
*/
double sum(vector<double> vec);

/**
* @brief returns avg of doubles in vector
* @date 11/10/2020
* @param vector<double> vec, the vector to evaluate
* @return avg
*/
double avg(vector<double> vec);

/**
* @brief returns lowest of doubles in vector
* @date 11/10/2020
* @param vector<double> vec, the vector to evaluate
* @return lowest
*/
double lowest(vector<double> vec);

/**
* @brief modifies string to become camel case
* @date 11/10/2020
* @param string str, the sting to evaluate
*/
void camelCase(string& str);
//this end the definition
#endif