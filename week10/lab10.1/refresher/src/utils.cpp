/**
* @file utils.cpp
* @brief  Week 10, C++ Review and Warmup from CSI140, functions implementation file
*
* @author Raymond Zheng
* @assignment Lecture 10.1
* @date 11/10/2020
* @credits
* srand functionality
* http://www.cplusplus.com/reference/cstdlib/srand/
* how to convert a specific area of a string to lower or upper
* https://stackoverflow.com/questions/8530529/convert-first-letter-in-string-to-uppercase
*/

#include "utils.h"
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>  

string randomElement(vector<string> vec)
{
    srand (time(NULL));
    return (vec[rand() % 6]);
}

double sum(vector<double> vec)
{
    double sum{};
    for (double d: vec)
        sum += d;
    return sum;
}

double avg(vector<double> vec)
{
    return (sum(vec) / vec.size());
}

double lowest(vector<double> vec)
{
    double lowest = vec[0];
    for (double d: vec)
        if(d < lowest)
        lowest = d;
    return lowest;
}
void camelCase(string& str)
{
    string word = "";
    bool toUpper = false;

    for (int i = 0; i < str.size(); i++)
    {
        if (i == 0)
            str[i] = tolower(str[i]);
            
        if(str[i] == ' ')
            toUpper = true;
        else if (toUpper == true)
        {
            str[i] = toupper(str[i]);
            word += str[i];
            toUpper = false;
        }
        else
            word += str[i];
    }
    str = word;
}