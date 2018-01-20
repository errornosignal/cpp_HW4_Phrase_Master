// Reid_Nolan_HW4_[Phrase_Master].cpp : Defines the entry point for the console application.
//Program for manipulation of a string input from the user. Options for shifting to lower case, reversing the order of words, sorting alphabetically, and applying ROT13 conversion.

#include "stdafx.h"
#include "Menu.h"
#include "Phrase.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	//set counter for program iterations
	int runCount = 0;

	//display program header
	Menu::displayProgHeader();

	//loop until user exit
	while (true)
	{		
		//local variable(s)
		std::string userPhrase = "";		

		//clean up input stream on re-iteration
		if (runCount > 0)
		{
			cin.clear();
			cin.ignore(512, '\n');
		}
		else
		{
			//no else needed
		}

		//prompt until phrase is valid
		bool userPhraseGood = false;
		while (!userPhraseGood)
		{
			//prompt for phrase
			Menu::displayPhrasePrompt();

			//get phrase(string) from user
			getline(cin, userPhrase);
			if (userPhrase.length() == 0)
			{
				Menu::displayEntryRequiredError();
			}
			else
			{
				userPhraseGood = true;
			}
		}
		cout << endl;

		//display menu options
		cout << "1. "; Menu::displayConvertToLower();		//convertToLower
		cout << "2. "; Menu::displayReverseWords();			//reverseWords
		cout << "3. "; Menu::displaySortAlphabetically();	//sortAlphabetically
		cout << "4. "; Menu::displayROT13();				//ROT13
		Menu::displayZeroToQuit();							//zeroToQuit
		
		//prompt until menu choice is valid
		bool menuSelectionGood = false;
		while (!menuSelectionGood)
		{
			//local variable(s)
			int menuSelection = 0;
			
			//prompt for selection
			Menu::displayMenuPrompt();			
			
			//get menu selection
			cin >> menuSelection;			
			
			//clear input stream if fail
			if (cin.fail())
			{
				cin.clear();
				cin.ignore(512, '\n');
			}
			else
			{
				//no else needed
			}
			
			Menu::menuSelect(menuSelection);
			cout << endl << userPhrase << endl;

			//switch for menu selection
			switch (menuSelection)
			{
			case 0:
				Menu::displayExitMessage();
				menuSelectionGood = true;
				exit(1);
			case 1:
				Phrase::convertToLower(userPhrase);
				menuSelectionGood = true;
				break;
			case 2:
				Phrase::reverseWords(userPhrase);
				menuSelectionGood = true;
				break;
			case 3:
				Phrase::sortAlphabetically(userPhrase);
				menuSelectionGood = true;
				break;
			case 4:
				Phrase::applyROT13(userPhrase);
				menuSelectionGood = true;
				break;
			default:
				Menu::displayInvalidSelection();
				break;
			}
		}

		cout << endl << endl;

		//increment iteration counter
		runCount++;
	}
	return 0;
}