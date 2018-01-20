#pragma once 

class Menu
{
public:	

	//constructor/destructor
	Menu();
	~Menu();

	//function declarations
	static void displayProgHeader();
	static void displayPhrasePrompt();
	static void displayConvertToLower();
	static void displayReverseWords();
	static void displaySortAlphabetically();
	static void displayROT13();
	static void displayZeroToQuit();
	static void displayExitMessage();
	static void displayMenuPrompt();
	static void displayInvalidSelection();
	static void displayEntryRequiredError();
	static int menuSelect(int menuSelection);	
};