#pragma once
#include "stdafx.h"
#include <iostream>

using namespace std;

//Initialises the menu function.
void menuFunc();

//Declares the menu function, this will be the main operator of the program.
void menuFunc()
{
	Name Character;			//Creates an instance of the class Name as Character.
	Story newStory;			//Creates an instance of the class Story as newStory.
	string again = "1";		//Declares the string variable again as "1".
	string cont;			//Declares the empty string cont.

	//While loop which will run as long as again holds the value "1".
	while (again == "1")
	{
		//Prompts the user to select their choice and assigns the value to cont.
		cout << "Welcome to Richard Stone's random story generator." << endl << "Please enter the corresponding number to your choice: " << endl << "1. GENERATE STORY 2. ADD TO FILES 3. SHOW FILE INFO 4. EXIT PROGRAM" << endl;
		getline(cin, cont);

		//Generates a story if the user enters "1".
		if (cont == "1") {
			cout << endl << "Generating story..." << endl;		//Sends a message stating that the story will be generated.

			newStory.storyGenerator();
		}
		
		//Proceeds to file addition if the user enters "2".
		if (cont == "2") {
			//Prompts the user to enter which file they'd like to add to, then assigns it to the variable whichFile.
			string whichFile;
			cout << endl << "To which file would you like to add?" << endl << "1. FIRST NAMES FILE 2. TITLES FILE" << endl;
			getline(cin, whichFile);

			//If the user selects "1", the file _firstNamesText.txt will be added to.
			if (whichFile == "1") {
				Character.addToFile("_firstNamesText.txt");
			}
			//If the user selects "2", the file _titlesText.txt will be added to.
			if (whichFile == "2") {
				Character.addToFile("_titlesText.txt");
			}
			//If the user enters neither 1 nor 2, resets the program.
			if (whichFile != "1" && whichFile != "2") {
				cout << "Unexpected input. Try again." << endl;
			}
		}

		//Proceeds to file length checking if the user enters "3".
		if (cont == "3") {
			//Assigns the names of each file to two variables.
			string fNamesFile = "_firstNamesText.txt";
			string tFile = "_titlesText.txt";
			//Assigns the length of each file to another two variables using the fileLength function.
			int lastLineNumF = Character.fileLength(fNamesFile);
			int lastLineNumT = Character.fileLength(tFile);

			//Outputs the result to the console.
			cout << "The current amount of names in the name file is: " << lastLineNumF << endl;
			cout << "The current amount of titles in the title file is: " << lastLineNumT << endl << endl;
		}
		//Closes the program with error code 0 if the user enters "4".
		if (cont == "4") {
			cout << "Exitting program...";
			exit(EXIT_SUCCESS);
		}
		//Brings the user to the "again" screen if unexpected input is given.
		if (cont != "1" && cont != "2" && cont != "3" && cont != "4") {
			cout << "Unexpected input. Try again." << endl;
		}

		//Asks the user if they would like to run the program again, and updates the value of again accordingly.
		cout << endl << endl << "Would you like to run the program again?" << endl;
		cout << "1. YES 2. NO" << endl;
		getline(cin, again);
		cout << endl;
	}
	//If the user enters "2", the program will shut down with error code 0.
	if (again == "2") {
		cout << "Shutting down successfully." << endl;
		exit(EXIT_SUCCESS);
	}
	//If the user enters any other value, the program will shut down with error code 1.
	if (again != "1" || again != "2") {
		cout << "Unexpected input. Shutting down." << endl;
		exit(EXIT_FAILURE);
	}
}