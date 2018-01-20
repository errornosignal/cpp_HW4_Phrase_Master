#include "stdafx.h"
#include "Menu.h"
#include <iostream>

using namespace std;

Menu::Menu()
{

}

Menu::~Menu()
{

}

//displayProgHeader
void Menu::displayProgHeader()
{
	cout << "Reid_Nolan_HW4_[Phrase_Master]" << endl << endl;
}

//displayPhrasePrompt
void Menu::displayPhrasePrompt()
{
	cout << "Enter a phrase: ";
}

//displayConvertToLower
void Menu::displayConvertToLower()
{
	cout << "Convert to lower case" << endl;
}

//displayReverseWords
void Menu::displayReverseWords()
{
	cout << "Reverse the words" << endl;
}

//displaySortAlphabetically
void Menu::displaySortAlphabetically()
{
	cout << "Sort alphabetically" << endl;
}

//displayROT13
void Menu::displayROT13()
{
	cout << "Apply ROT13 conversion" << endl;
}

//displayZeroToQuit
void Menu::displayZeroToQuit()
{
	cout << "0. Quit" << endl;
}

//displayExitMessage
void Menu::displayExitMessage()
{
	cout << "exiting program..." << endl;
}

//displayMenuPrompt
void Menu::displayMenuPrompt()
{
	cout << "Please select an option: ";
}

//displayInvalidSelection
void Menu::displayInvalidSelection()
{
	cout << "Invalid selection. Try again." << endl;
}

//displayEntryRequiredError
void Menu::displayEntryRequiredError()
{
	cout << "Error! This entry is required." << endl;
}

//menuSelect
int Menu::menuSelect(int menuSelection)
{
	return menuSelection;
}