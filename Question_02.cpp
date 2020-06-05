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