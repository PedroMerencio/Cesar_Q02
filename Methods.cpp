/*
 * Created by Pedro Merencio Primo Passos
 *
 * This source code file contains the implementation
 * to a method that checks if one string is a partial
 * -permutation of the other.
 *
 * It is assumed each string contains only one word.
*/

#include <iostream>

using namespace std;

// Local function to sort arrays.
void sorting(char word[], unsigned int size)
{
	char temp;
	unsigned int i, j;
	
	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size - 1; j++)
		{
			if (word[i] > word[j])
			{
				temp = word[i];
				word[i] = word[j];
				word[j] = temp;
			}
		}
	}
}


bool isPermutation(char word1[], unsigned int size1, char word2[], unsigned int size2)
{
	bool isPartialPermutation = false;
	int i = 0;
	char* word1Aux = new char[size1];
	char* word2Aux = new char[size2];
	bool* letterNotChecked = new bool[size2];
	int counter = 0;

	memcpy(word1Aux, word1, size1);
	memcpy(word2Aux, word2, size2);

	fill_n(letterNotChecked, size2, true);

	
	
	if( size1 == 0 || size1 != size2 )  // Comparing sizes of strings
	{ 
		isPartialPermutation = false;
	}
	else if( memcmp(word1, word2, size1) == 0 ) // Comparing if already equal
	{
		isPartialPermutation = false;
	}
	else if (word1[0] != word2[0]) // Comparing first letters
	{
		isPartialPermutation = false;
	}
	else
	{
		// Checking is strings are anagram
		sorting(word1Aux, size1);
		sorting(word2Aux, size2);

		if (memcmp(word1Aux, word2Aux, size1) != 0)
		{
			isPartialPermutation = false;
		}
		else
		{
			if (size1-1 <= 3) // The '\r' character at the end does not count.
			{
				isPartialPermutation = true;
			}
			else
			{
				for (i = 1; i < size1; i++)
				{
					if (word1[i] != word2[i])
					{
						counter++;
					}
				}

				if (counter <= (2 * (size1 - 1) / 3))
				{
					isPartialPermutation = true;
				}
				else
				{
					isPartialPermutation = false;
				}
			}
		}
	}

	delete[] word1Aux;
	delete[] word2Aux;
	delete[] letterNotChecked;

	return isPartialPermutation;
}