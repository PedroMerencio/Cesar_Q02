/*
 * Created by Pedro Merencio Primo Passos
 *
 * This header file contains the prototype to a method
 * that checks if one string is a partial-permutation
 * of the other.
 *
 * It is assumed each string contains only one word.
*/

/**
  * @brief  Check if two strings are a partial-permutation of one another.
  * @param  word1: First string.
  * @param  size1: Size of the parameter word1
  * @param  word2: Second string.
  * @param  size2: Size of the parameter word2
  * @return isPartialPermutation: Boolean result of the checking.
  *         Returns true if it is a partial-permutation, and false otherwise.
  */
bool isPermutation(char word1[], unsigned int size1, char word2[], unsigned int size2);