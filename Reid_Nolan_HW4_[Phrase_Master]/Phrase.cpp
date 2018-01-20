#include "stdafx.h"
#include "Phrase.h"
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <vector>
#include <sstream>
#include <array>

using namespace std;

Phrase::Phrase()
{
}

Phrase::~Phrase()
{
}

//convertToLower
void Phrase::convertToLower(string userPhrase)
{
	//set input string to new variable
	string newUserPhrase = userPhrase;

	//convert uppercase to lower case, if necessary 
	transform(newUserPhrase.begin(), newUserPhrase.end(), newUserPhrase.begin(), ::tolower);
	
	//set transformed to new variable and display
	string convertedUserPhrase = newUserPhrase;
	cout << convertedUserPhrase;
}

//reverseWords
void Phrase::reverseWords(string userPhrase)
{
	//set input string to new variable
	string newUserPhrase = userPhrase;
	
	//initialize counter variable for word count in string
	int wordCount = 0;
	
	//count words in string using space as a delimiter
	for (int i = 0; newUserPhrase[i] != '\0'; i++)
	{
		if (newUserPhrase[i] == ' ')
		{
			wordCount++;
		}
	}
	//increment one more time so counter reflects actual qty of words in string
	wordCount++; 

	//set dynamic array and initialize elements
	string *words = new string[wordCount];
	for (int j = 0; j < wordCount; j++)
	{
		words[j] = '\0';
	}		
	
	//make a buffer string
	string stringBuffer;
	//insert string into stream
	stringstream stringStream(newUserPhrase);
	//set up vector for tokens
	vector<string> tokens;	

	//drop vector tokens into array
	for (int i = 0; i < wordCount; i++)
	{
		while (stringStream >> stringBuffer)
		{
			tokens.push_back(stringBuffer);
			words[i] = stringBuffer;
			i++;
		}
	}	

	//read array elemnets backwards
	for (int q = wordCount-1; q >= 0; q--)
	{
		cout << words[q] << " ";
	}
	cout << endl;

	//delete dynamic array
	delete[] words;
}

//sortAlphabetically
void Phrase::sortAlphabetically(string userPhrase)
{
	//set input string to new variable
	string newUserPhrase = userPhrase;

	//initialize counter variable for word count in string
	int wordCount = 0;

	//count words in string using space as a delimiter
	for (int i = 0; newUserPhrase[i] != '\0'; i++)
	{
		if (newUserPhrase[i] == ' ')
		{
			wordCount++;
		}
	}
	wordCount++; //increment one more time so counter reflects actual qty of words in string

				 //set dynamic array and initialize elements
	string *words = new string[wordCount];
	for (int j = 0; j < wordCount; j++)
	{
		words[j] = '\0';
	}

	//make a buffer string
	string stringBuffer;
	//insert string into stream
	stringstream stringStream(newUserPhrase);
	//set up vector for tokens
	vector<string> tokens;

	//drop vector tokens into array
	for (int i = 0; i < wordCount; i++)
	{
		while (stringStream >> stringBuffer)
		{
			tokens.push_back(stringBuffer);
			words[i] = stringBuffer;
			i++;
		}
	}

	//sort array elements in ascending order
	sort(words, words+wordCount);  //I love this btw

	//read array elements
	for (int q = 0; q < wordCount; q++)
	{
		cout << words[q] << " ";
	}
	cout << endl;

	//delete dynamic array
	delete[] words;
}

//applyROT13
void Phrase::applyROT13(string userPhrase)
{
	//set input string to new variable
	string newUserPhrase = userPhrase;	
	const int shiftROT13 = 13;
	
	//loop through string and set shift
	for (int i = 0; newUserPhrase[i] != '\0'; i++) {
		if (newUserPhrase[i] >= 'a' && newUserPhrase[i] <= 'm')
		{
			newUserPhrase[i] += shiftROT13;
		}

		else if (newUserPhrase[i] > 'm' && newUserPhrase[i] <= 'z')
		{
			newUserPhrase[i] -= shiftROT13;
		}

		else if (newUserPhrase[i] >= 'A' && newUserPhrase[i] <= 'M')
		{
			newUserPhrase[i] += shiftROT13;
		}

		else if (newUserPhrase[i] > 'M' && newUserPhrase[i] <= 'Z')
		{
			newUserPhrase[i] -= shiftROT13;
		}
		else
		{
			//no else needed
		}
	}

	//display converted phrase (string)
	cout << newUserPhrase;
}