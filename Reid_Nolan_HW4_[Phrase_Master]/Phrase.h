#pragma once
#include <string>
using namespace std;

class Phrase
{
public:
	//constructor/destructor
	Phrase();
	~Phrase();

	//function declarations
	static void convertToLower(string userPhrase);
	static void reverseWords(string userPhrase);
	static void sortAlphabetically(string userPhrase);
	static void applyROT13(string userPhrase);
};