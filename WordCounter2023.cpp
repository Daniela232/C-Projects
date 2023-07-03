/*
    Name: Word Counter
    Author: Daniela Valerio
    Date: 04/16/2023
    Description: ask user for a sentence with no more than 80 character
        and finds out how many sentences are in the sentence.
*/

#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int CountWords(char* str);

//Main test driver
int main()
{
    const int SIZE = 81;
    char WordCounter[SIZE];
    int words;

    cout <<"Enter a sentence that is less than " 
        << (SIZE - 1) << " characters: " << endl;
    cin.getline(WordCounter, SIZE);

    words = CountWords(WordCounter);
    cout << "The number of words in your sentence is: "
        << words << endl;
}

//counts words in user's sentence
int CountWords(char *str)
{
    int words = 0;
    while(*str)
    {
        if (*str == ' ')
        {
            words++;
        }
        str++;
    }
    return words + 1;
}