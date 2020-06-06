/*
 * Created by Pedro Merencio Primo Passos
 *
 * This header file contains the prototype to a
 * method that checks if two strings are one
 * typo(or zero typos) away.
 *
 * It is assumed each string contains only one word.
 *
 * There are three types of typos that can be performed
 * on strings : insert a character, remove a character or
 * replace a character.
*/

/**
  * @brief  Check if two strings are a one typo (or zero typos) away.
  * @param  word1: First string.
  * @param  size1: Size of the parameter word1
  * @param  word2: Second string.
  * @param  size2: Size of the parameter word2
  * @return typos: Returns 0 if zero typos away.
  *         Returns 1 if one typo away.
  *         And returns -1 otherwise.
  */
int chekingTypos(char word1[], int size1, char word2[], int size2);