/**
* @file week10.cpp
* @brief  Week 10, C++ Review and Warmup from CSI140, functions implementation file
*
* @author Raymond Zheng
* @assignment Lecture 10.1
* @date 11/10/2020
* @credits
* 
*/
#include "functions.h"

bool isEven(int num)
{
    return (num % 2 == 0);
}

int numVowels (string inputString)
{
    int retVal{};
    for(char c: inputString)
    {
        c = toupper(c);
        if (c =='A' || c == 'E' || c == 'I' ||c == 'O' ||c == 'U' )
        {
            retVal++;
        }
    }
    return retVal;
}

void capitalize(string& refString)
{
    for (int i = 0; i < refString.size(); i++)
    {
        refString[i]=toupper(refString[i]);
    }
}