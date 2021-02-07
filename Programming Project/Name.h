#pragma once
#include <string>
using namespace std;

//Creates the class 'Name'.
class Name
{
//Initialises all public functions.
public:
	string nameGenerator(string fileName);
	void addToFile(string fileName);
	int fileLength(string fileName);
//Initalises all protected functions.
protected:
	string fileLineSelector(string fileName);
	int randomNumberGenerator(int maxValue);
};