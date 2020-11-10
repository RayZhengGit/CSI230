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

#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
/*
    //initialization
    int i{0};
    int k = 0;
    int j;
    cout << "Values of i, k, and j" << endl;
    cout << i << " " << k << " " << j << endl;

    cout << "Addresses of i, k, and j" << endl;
    cout << &i << " " << &k << " " << &j << endl;
    cout << (long)&i << " " << (long)&k << " " << (long)&j << endl;

    //size
    cout << "Size of various variables" << endl;
    unsigned short int usi{};
    string str{"Hello"};
    char c{'A'};
    double d = 3.14159;
    float f = 3.14159;
    bool myBool{true};

    cout << "unsigned short: " << sizeof(usi) << endl;
    cout << "string: " << sizeof(str) << endl;
    cout << "char: " << sizeof(c) << endl;
    cout << "double: " << sizeof(d) << endl;
    cout << "float: " << sizeof(f) << endl;
    cout << "bool: " << sizeof(myBool) << endl;

    //conversion of datatypes
    int convertedD = d; //from above
    cout << "d converted to int: " << convertedD << endl;
    i = 8;
    k = 3;
    cout << "integer division: " << i/k << endl;
    cout << "casting: " << static_cast<double>(i) / k << endl;

    //conditional logic
    bool a{false};
    bool b{true};
    cout << boolalpha << a << " " << b << endl;

    cout << boolalpha << (6 == 6) << endl;
    cout << boolalpha << (6 == 7) << endl;
    if ( i > k )
    {
        cout << "i is greater than k" << endl;
    }
    else
    {
        cout << "k is greater than i" << endl;
    }
    

    //iteration
    for(i = 0; i < 10; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    int m{};
    do
    {
        cout << m << " ";
        m++;
    }while(m < 10);
    cout << endl;
    
    int n = 0;
    while(n < 10)
    {
        cout << n << " ";
        n++;
    }
    cout << endl;
    //cstyle strings
    string myString{"This is a string example"};
    cout << myString << "is:" << myString.size() << " bytes long" << endl;
    const unsigned short EXAMPLE_CONST = 26;
    char cString[EXAMPLE_CONST] = "This is a cstring example";
    for (i = 0; i < EXAMPLE_CONST; i++)
    {
        cout << cString[i];
    }
    cout << endl;
    cout << "Last value in a cstring" << endl;
    cout << cString[EXAMPLE_CONST - 2] << endl;

    cout << "range based loop " << endl;
    for(char c: cString)
    {
        cout << c;
    }
    cout << endl;

    //string
    cout << "iterating through a string using an index" << endl;
    for(i = 0; i < myString.size(); i++)
    {
        cout << myString[i];
    }
    cout << endl;
    cout << "string range based loop" << endl;
    for(char letter : myString)
    {
        cout << letter;
    }
    cout << endl;

    //vectors
    vector <string> strVec;
    strVec.push_back("Bilbo");
    strVec.push_back("Gandalf");
    strVec.push_back("Pippin");
    strVec.push_back("Sam");

    for (string s: strVec)
    {
        cout << s << endl;
    }
    cout << "strVec size: " << strVec.size() << endl;

    strVec.pop_back();
    cout << "strVec size after pop_back: " << strVec.size() << endl;
    cout << "the last value is: " << strVec.back() << endl;
    strVec.push_back("Saron");
    cout << "the last value is: " << strVec.back() << endl;
    cout << "strVec size: " << strVec.size() << endl;
    //functions
    int numberToCheck{};
    cout << "Enter a number to check for evenness: ";
    cin >> numberToCheck;
    string oddOrEven;
    if(isEven(numberToCheck))
    {
        oddOrEven = "even";
    }
    else
    {
        oddOrEven = "odd";
    }
    cout << numberToCheck << " is: " << oddOrEven << endl;
    //multiple file project
*/
    //call by value
    string strMessage = "The cardinal virtues of the individual are courage, honesty, temperence and wisdom.";
    cout << "Number of Vowels: " << numVowels(strMessage) << endl;
    //call by reference
    string myString = "hello, i'm lower case";
    capitalize(myString);
    cout << "Capitalized version is: " << myString << endl;

    return EXIT_SUCCESS;
}