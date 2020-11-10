/**
* @file week10.cpp
* @brief  Week 10, C++ Review and Warmup from CSI140
*
* @author Raymond Zheng
* @assignment Lecture 10.1
* @date 11/10/2020
* @credits
* 
*/
//header guard
#ifndef FUNCTIONS_H

#define FUNCTIONS_H
#include <string>
using namespace std;
//forward declaration
/**
* @brief  determines eveness of an integer
* @date 11/10/2020
* @param int num, the interger to evaluate
* @return boolean (true for even, false for odd)
*/
bool isEven(int num);

/**
* @brief  determines number of vowels in an input string
* @date 11/10/2020
* @param string inputString, the string to evaluate
* @return int the number of vowels
*/
int numVowels (string inputString);

/**
* @brief  capatilized the input string
* @date 11/10/2020
* @param string refString, string to be capitalized
* @return int the number of vowels
*/
void capitalize(string& refString);

//this end the definition
#endif