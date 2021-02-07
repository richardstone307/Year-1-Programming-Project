#pragma once
#include "stdafx.h"
#include "Name.h"
#include <iostream>
#include <fstream>
#include <random>
#include <chrono>
using namespace std;

//Basic function for identifying the length of a given file. 
int Name::fileLength(string fileName) { //Takes the file's name as a parameter. This can therefore be used for any text file.
	int lineCount = 0;					//Declares the lineCount variable with the integer value 0.
	string line;						//Declares an empty string variable called line.
	ifstream file(fileName);			//Prepares the given file to be used as an input.
	while (getline(file, line))			//Calls the getline function with the given file and the current line.
		lineCount++;					//Increments lineCount for each line in the file.
	return lineCount;					//Returns the value of lineCount.
}

//Function which allows the user to insert a text string to the bottom of any text file.
void Name::addToFile(string fileName) {							//Takes the file's name as a parameter. This can therefore be used for any text file.				
	ofstream file;												//Prepares the file to be used as an output.
	string userInput;											//Declares an empty string called userInput. This will later hold what the user wants to add to the file.
	file.open(fileName, ios::app);								//Opens the given file for output.

	cout << "Enter what you would like to add to the file, "	//Prompts the user to enter what they would like added.
		<< fileName << ": ";
	
	getline(cin, userInput);									//Retrieves the user's input, getline() used so that spaces can be included.
	cout << endl;												//endl for formatting purposes.
	
	if (userInput == " " || userInput == "") {
		cout << "Nothing was entered, therefore nothing will be saved." << endl;
	}
	else {
		file << endl << userInput;									//Inserts the user's input on a new line into the given file.
		cout << "Successfully added " << userInput
			<< " to file: " << fileName << endl;					//Sends a successful message to the user's console.
	}
}

//Function which generates a random number. rand() and srand() were attempted but did not work at all.
//rand and srand() are also inefficient random number generators between two given values.
//This function will be used in both the name generation from a file, and picking a line from the arrays.
int Name::randomNumberGenerator(int maxValue) {					//Takes in a maximum value as a parameter. This must change because each array will have a different length.
	
	//Generates a seed for the random number to be generated from. This uses the system's time as a seed.
	unsigned seed = chrono::system_clock::now().time_since_epoch().count();
	default_random_engine seedGenerator(seed);

	//Generates a random integer between 0 and the given maxValue.
	uniform_int_distribution<int> randomInt(0, maxValue);
	return randomInt(seedGenerator);
}	//Code referenced in file "_references.txt".

//Function which selects a line in a given file using the randomNumberGenerator function.
string Name::fileLineSelector(string fileName) {			//Takes in the file's name as a parameter.
	ifstream file(fileName);								//Prepares the file to be used as an input.

	int lastLineNum = fileLength(fileName);					//Creates a variable which holds the amount of lines in the file.
	int selectedLine = randomNumberGenerator(lastLineNum);	//Passes the previous variable as an argument for the max value of randomNumberGenerator,
															//then assigns that value to the selectedLine variable.
	string line;											//Declares an empty string called line.
	
	//Iterates through the given file until the selected line is reached, then returns the content of that line.
	for (int i = 1; i <= selectedLine; i++)		
		getline(file, line);
	return line;
}

//Function which generates a name or title for a character.
//Both are not always generated, as sometimes the name must be given without the title.
string Name::nameGenerator(string fileName) {					//Takes in the file's name as a parameter. This will be either the first name document or the last name document.
	Name Character;												//Declares the Name 'Character', an instance of the Name class.
	string nameOrTitle = Character.fileLineSelector(fileName);	//Declares the variable nameOrTitle and uses the fileLineSelector from the Name class.
	return nameOrTitle;											//Returns the name or title assigned to the variable.
}