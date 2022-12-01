// S110-Matos-Caesar-Encoding-App.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace  std;

const int KEY = 3;

int main()
{
    string plainText = "Hello Zorro";
    string cypherText = "";

    //Phase1. Encoding (from plain text to cypher text)
    for (int i = 0; i < plainText.size(); i++)
    {
        char c = plainText[i];
        c += KEY;
        cypherText += c;
    }

    cout << "The encoded message is:" << endl;
    cout << cypherText << endl;
    
    //Phase2. Decoding (from encrypted to plain text)
    string decodeMsg = "";
    for (int i = 0; i < cypherText.size(); i++)
    {
        char c = cypherText[i];
        c -= KEY;
        decodeMsg += c;
    }
    cout << "\nThe decoded message is:" << endl;
    cout << decodeMsg << endl;
}

