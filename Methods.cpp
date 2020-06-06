/*
 * Created by Pedro Merencio Primo Passos
 *
 * This source code file contains the implementation
 * to a method that checks if two strings are one
 * typo(or zero typos) away.
 *
 * It is assumed each string contains only one word.
 *
 * There are three types of typos that can be performed
 * on strings : insert a character, remove a character or
 * replace a character.
*/

#include <iostream>

using namespace std;

/***********************************************************/
/*                      Local Headers                      */
/***********************************************************/

/**
  * @brief  Check if two strings are zero typos away (equal words).
  */
int isZeroTypo(char word1[], int size1, char word2[], int size2);

/**
  * @brief  Check if first typo: character insertion.
  */
int is1stTypo(char word1[], int size1, char word2[], int size2);

/**
  * @brief  Check if second typo: character removal.
  */
int is2ndTypo(char word1[], int size1, char word2[], int size2);

/**
  * @brief  Check if third typo: character replacment.
  */
int is3rdTypo(char word1[], int size1, char word2[], int size2);

/************************************************************/
/*                      Global Methods                      */
/************************************************************/

int chekingTypos(char word1[], int size1, char word2[], int size2)
{
	int typos = 0;
	int type0, type1, type2, type3;

	type0 = isZeroTypo(word1, size1, word2, size2);
	
	type1 = is1stTypo(word1, size1, word2, size2);

	type2 = is2ndTypo(word1, size1, word2, size2);

	type3 = is3rdTypo(word1, size1, word2, size2);

	if (type0 == 1)
	{
		typos = 0;
	}
	else if ((type1 + type2 + type3) == 1)
	{
		typos = 1;
	}
	else
	{
		typos = -1;
	}

	return typos;
}


/***********************************************************/
/*                      Local Methods                      */
/***********************************************************/

int isZeroTypo(char word1[], int size1, char word2[], int size2)
{
	if (size1 != size2)
	{
		return 0;
	}
	else if (memcmp(word1, word2, size1) == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int is1stTypo(char word1[], int size1, char word2[], int size2)
{
	if (size1 >= size2)
	{
		return 0;
	}
	else
	{
		return (size2 - size1);
	}
}

int is2ndTypo(char word1[], int size1, char word2[], int size2)
{
	if (size1 <= size2)
	{
		return 0;
	}
	else
	{
		return (size1 - size2);
	}
}

int is3rdTypo(char word1[], int size1, char word2[], int size2)
{
	int numOfReplace = 0;
	int numOfEquals = 0;
	int i = 0, j = 0;
	int* isElementPresent = new int[size1];

	fill_n(isElementPresent, size1, 0);

	if (size1 != size2)
	{
		numOfReplace = 0;
	}
	else
	{
		for (i = 0; i < size1; i++)
		{
			for (j = 0; j < size1; j++)
			{
				if (word1[i] == word2[j])
				{
					isElementPresent[i] = 1;
					break;
				}	
			}
		}

		for (i = 0; i < size1; i++)
		{
			numOfEquals += isElementPresent[i];
		}

		numOfReplace = size1 - numOfEquals;
	}

	return numOfReplace;
}