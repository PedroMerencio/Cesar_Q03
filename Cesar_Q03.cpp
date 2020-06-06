/*
 * Created by Pedro Merencio Primo Passos
 *
 * This programs uses a method to check if two strings
 * are one typo (or zero typos) away.
 *
 * It is assumed each string contains only one word.
 * 
 * There are three types of typos that can be performed
 * on strings: insert a character, remove a character or
 * replace a character.
*/

#include <iostream>
#include "Methods.h"

using namespace std;

int main()
{
    char word1[] = "Pedro";
    char word2[] = "Pedo";
    int size1, size2;
    int typoResult;

    size1 = sizeof(word1);
    size2 = sizeof(word2);

    typoResult = chekingTypos(word1, size1, word2, size2);

    cout << "String 1: " << word1 << endl;
    cout << "String 2: " << word2 << endl << endl;

    switch (typoResult)
    {
    case 0:
        cout << "The given strings are 0 typos away." << endl;
        break;
    case 1:
        cout << "The given strings are 1 typo away." << endl;
        break;
    case -1:
        cout << "The given strings are more than 1 typo away." << endl;
        break;
    default:
        cout << "Error" << endl;
        break;
    }

    return 0;
}