/**
* @file main.cpp
* @brief  Week 10, C++ Review and Warmup from CSI140
*
* @author Raymond Zheng
* @assignment Lecture 10.1
* @date 11/11/2020
* @credits
* 
*/

#include <iostream>
#include <vector>
#include "utils.h"
using namespace std;

int main()
{
    // string vector
    vector<string> strVec;
    strVec.push_back("SpongeBob");
    strVec.push_back("Patrick");
    strVec.push_back("Mr.Krabs");
    strVec.push_back("Sandy");
    strVec.push_back("Larry");
    strVec.push_back("Squidward");
    cout << "Dumping the Vector of 6 Elements: ";
    for (string c: strVec)
        cout << c << " ";
    cout << endl;

    cout << "calling randomElement" << endl;
    cout << randomElement(strVec) << endl;

    // double vector
    vector<double> doubleVec;
    doubleVec.push_back(1.23);
    doubleVec.push_back(6.74);
    doubleVec.push_back(3.14);
    doubleVec.push_back(10.24);
    doubleVec.push_back(-5.78);
    cout << "dumping the vector of doubles" << endl;
    for (double d: doubleVec)
        cout << d << " ";
    cout << endl;
    cout << "sum: " << sum(doubleVec) << endl;
    cout << "avg: " << avg(doubleVec) << endl;
    cout << "lowest: " << lowest(doubleVec) << endl;

    // multi world string
    string myString = "The quick brown fox jumped over the lazy something";
    cout << "Calling camelCase with: " << myString << endl;
    camelCase(myString);
    cout << "myString after camelCase: " << myString << endl;
    return EXIT_SUCCESS;
}