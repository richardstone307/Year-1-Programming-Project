#pragma once
#include <string>
#include "Name.h"
using namespace std;

//Creates the class Story which inherits from Name.
class Story : public Name
{
//Declares all public functions.
public:
	void storyGenerator();

	//Declares all functions inherited from Name.
	Story()
	{
		int randomNumberGenerator(int maxValue);
		string firstNameSelector(int lineSelector);
	}
//Declares all private functions.
private:
	string introSequence();
	string charDescription();
	string bridgeSequence();
	string otherCharacterIntro();
	string dialogueBridge();
	string dialogue();
	string dialogueReaction();
	string dilemma();
	string resolution();
	string endSequence();

	void writeToFile(string toWrite);
};