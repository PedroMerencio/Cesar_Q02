/*
 * Created by Pedro Merencio Primo Passos
 *
 * This programs uses a method to check if one string
 * is a partial-permutation of the other.
 *
 * It is assumed each string contains only one word.
*/

#include <iostream>
#include "Methods.h"

using namespace std;

int main()
{
    char word1[] = "misspellings";  
    char word2[] = "mpeissngslli";
    int size1, size2;
    bool isPartialPermutation = false;

    size1 = sizeof(word1);
    size2 = sizeof(word2);

    cout << "size1 = " << size1 << endl;
    cout << "size2 = " << size2 << endl;

    isPartialPermutation = isPermutation(word1, size1, word2, size2);

    cout << "String1: " << word1 << endl;
    cout << "String2: " << word2 << endl;
    if (isPartialPermutation)
    {
        cout << "Partial Permutation" << endl;
    }
    else
    {
        cout << "NOT a Partial Permutation" << endl;
    }

    return 0;
}