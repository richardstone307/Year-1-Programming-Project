#pragma once
#include "stdafx.h"
#include "Story.h"
#include "Name.h"
#include <iostream>
#include <fstream>
using namespace std;

//Function for the first segment of the story.
string Story::introSequence() {
	const int arrayLength = 13;	//Array's length.
	//Declares an array filled with possible intro sentences.
	string introArray[arrayLength] = {
							"Once upon a time, there was a lonely individual who wandered the forests from dusk until dawn, revelling in the cool moonlight. This lonely individual bore the name ",
							"In a far away land, there lived a powerful individual, shrouded by mystery. This was ",
							"Living amongst the tree people was a peaceful soul who sings to the wind. This gentle soul was named ",
							"As the sun rises, so does an early worm who never misses the golden rays of the new day. Their name is of course ",
							"Imprisoned in a secure unit, evil stirs and instantly, silence falls. This was the life of ",
							"As the birds begin to sing, a pair of windows are thrown open by strong hands. These strong hands belonged to ",
							"Sunlight pours through the open window, bathing the sleeping form in the nearby bed in warmth. Lazing in bed was of course ",
							"Rain softly patters melodically against the roof as the tenant of the house happily swirls through their home, contented. The tenant was named ",
							"Eyes snap open at the loud ringing of an alarm and the realisation of lateness hits like a brick to the cranium. A brick to the cranium of ",
							"Soft singing emits from the forest where a calm individual sits, basking in the sunlight. The voice belonged to ",
							"Rushing out of the door, a frantic individual steps in the gift their dog left on the doorstep, and with a sigh heavy with annoyance, they race down the street. Such is the life of ",
							"Walking in time to their music, a chipper individual smiles in contentment with closed eyes, a sharp pinging sound is made as they collide with a lamp post. How embarrassing for ",
							"Slipping on a cowpat, an embarrassed, red faced unfortunate promptly decides they dislike the countryside. The red face was that of "
	};

	int selectedSentence = randomNumberGenerator(arrayLength - 1);	//Generates a random number based on the array's length.

	string introString = introArray[selectedSentence];				//Declares a variable called introString and assigns the selected value of the array to it.
	return introString;												//Returns the selected string.
}

//Function for the description of any character.
//Works exactly the same as the introSequence function.
string Story::charDescription() {
	const int arrayLength = 28;

	string descArray[arrayLength] = {
							" was an obnoxious, rude, and overall terrible indivudal. ",
							" enjoyed few things in life. Watching my little pony was one such pleasure. ",
							" was really, morbidly obese to be honest. ",
							" smelled quite strongly like rancid, half digested cabbage. ",
							" was overall a great individual, adored by all that they encountered. ",
							" was a huge supporter of communism, so take from that what you will. ",
							" was a mild mannered individual, small of stature but not small of heart by any means. ",
							" enjoyed a good, strong pint at the pub. Several pints, even. They were a recovering alcoholic, quite tragic really. ",
							" bore a great big bushy beard, the likes of which would make Karl Marx proud. ",
							" was an expert at pool, they never lost a single ball down any of the holes. ",
							" ate too many chips, and therefore their BMI was absolute trash. ",
							" absolutely loved to do Kahoots, as many Kahoots as humanly possible in fact. Sometimes for over half an hour. ",
							" spoke in barely a whisper, so much so that very few could hear them half the time. ",
							" often let out a great belch to assert their dominance. ",
							" was a lonely soul and would do anything to have the company of someone who loved them dearly. ",
							" was the kind of person that could clear a room. I mean, it's because they reek but yeah, they clear the room. ",
							" doesn't have any A-Levels. Or any GCSEs... but they sure have a \"can do\" attitude! Although, what they can do is pretty limited by the sounds of it. ",
							" finds themselves agreeing with satanism more and more each day. Is that worrying? ",
							" often fantasies about strangling birds. But the stupid things always seem to get away. ",
							" likes to go commando. Don't ask why, they just do. ",
							" Eats to numb the pain of Karen leaving. It's not good. The pizza boxes in the apartment are starting to stack higher than their self esteem. ",
							" started the morning by bathing in baked beans, Heinz of course. ",
							" finds happiness in pulling the wings off butterflies. Quite disturbing actually. ",
							" was the sort of kid you'd find licking windows and eating crayons in the back of the classroom, to put it lightly. ",
							" wasn't easily offended, and frankly can't believe you thought they might be. ",
							" thinks the person reading this story is a loser. ",
							" was not allowed within a ten mile radius of primary schools. ",
							" held more conversations with their rubber plant than any living human. "
	};

	int selectedSentence = randomNumberGenerator(arrayLength - 1);

	string descString = descArray[selectedSentence];
	return descString;
}

//Function for the bridging sequence between the intro and other character's introduction.
//Works exactly the same as the introSequence function.
string Story::bridgeSequence() {
	const int arrayLength = 15;

	string bridgeArray[arrayLength] = {
							" set off, to find a distraction from the gaping hole in their heart. ",
							" jumped as a rather large dog rounded the corner, falling backward into, and becoming wedged in a trash can. ",
							" lazily yawned. The day before was arduous and tiring. With aching muscles they stretched, determined to have a better day today. ",
							" sneezed suddenly, spraying their new shirt with snot. Grunting angrily, a trudge back to the house was made. ",
							" accidentally touched hands with a nearby stranger. Startled by the sudden warmth on their fingertips, they smiled in a coy fashion, feeling their face flush with shyness. ",
							" began a walk along the concrete jungle of the city and dodged passerbyes with extreme precision, managing not to touch anyone. ",
							" locked eyes with the man across from them as they took a bite of their banana. How awkward. ",
							" grumbled in contempt as they came to the realization the cashier from yesterday gave them the wrong change. The missing 20p made their blood boil. ",
							" jogged happily to the bus stop, happy to finally be early enough to catch the thing only to see it zoom past, leaving their angry shaking fist in the dust. ",
							" hummed quietly, accompanied by the rustling of trees alongside the dirt path they walked. ",
							" danced around as though no one was watching, although people were looking... and they looked mortified. ",
							" ran a hand through their hair and pulled out a leaf. Perplexed, they sat in the sunlight and wondered how it got there before tossing it away with an amused smile. ",
							" reached a hand out and held the grass in their fingers for a moment or two, thinking about pulling it out, but decided against it and patted it softly instead. ",
							" reached down to pet a stray cat that was winding itself around their ankles, smiling at the softness of the cat's fur. ",
							" strolled back into the coffee shop they had left an item at last night and wondered how they could possibly ask for their copy of the communist manifesto back. ",

	};
	int selectedSentence = randomNumberGenerator(arrayLength - 1);

	string bridgeString = bridgeArray[selectedSentence];
	return bridgeString;
}

//Function for the other character's introduction.
//Works exactly the same as the introSequence function.
string Story::otherCharacterIntro() {
	const int arrayLength = 15;

	string charaArray[arrayLength] = {
							"It was at this point that they locked eyes with their sworn nemesis, ",
							"From across the way, they noticed strolling along a certain figure. It was the figure of a person they had a huge crush on, ",
							"Coincidentally, they bumped into their mother in this very unfitting location. Their mother was called ",
							"A few seconds after this, their eyes wandered only to fix upon a stiff figure. It was the idiot who cuts in line every morning at the coffee shop, ",
							"Right after this, they collided hard with ",
							"Looking across the room, their eyes freeze in place as they look upon their high school bully who used to wedgie them everyday, ",
							"Standing up and stretching, they accidentally punch someone in the arm. Looking up to apologise, they realise they know the person. It's ",
							"It was then they laughed hysterically at something on their phone, spitting hot coffee in the face of their high school maths teacher, ",
							"A few seconds later, they look up to find a face just inches away, it was their best friend ",
							"Suddenly, a graceful figure appears and glides down the street in a tasteful fashion. Watching from afar, they are in awe until realising this figure belongs to their cousin, ",
							"After a prompt visit to the public toilets, they sigh in happiness feeling 5 pounds lighter, but leaving behind fumes strong enough to kill 10 men.. Unfortunately, an unsuspecting individual walks in and instantly vomits. To make matters worse, it was their crush, ",
							"Fantasising about caressing the soft fur of a poodle, they snap out of their trance as they spot their sworn enemy, ",
							"Suddenly, a stiff figure marches by quietly humming the Russian national anthem. It's that one kid from high school who tried to convince the entire history class communism is good, named ",
							"Walking by, sporting the most fantastic, envy inspiring beard was ",
							"Suddenly, a pink convertible drives by blasting \"Barbie Girl\" by Aqua. As the car stops at a red light, the roof comes down to show a tough, macho individual sat in the driver's seat. It was "
	};
	int selectedSentence = randomNumberGenerator(arrayLength - 1);

	string otherCharString = charaArray[selectedSentence];
	return otherCharString;
}

//Function for the bridge between the character's name and their dialogue.
//Works exactly the same as the introSequence function.
string Story::dialogueBridge() {
	const int arrayLength = 12;

	string diaBridgeArray[arrayLength] = {
							" quipped",
							" said",
							" responded",
							" replied",
							" shouted",
							" screamed",
							" moaned",
							" belted",
							" yelled",
							" whispered",
							" cried",
							" whimpered",
	};
	int selectedSentence = randomNumberGenerator(arrayLength - 1);

	string diaBridgeString = diaBridgeArray[selectedSentence];
	return diaBridgeString;
}

//Function for the dialogue of a character.
//Works exactly the same as the introSequence function.
string Story::dialogue() {
	const int arrayLength = 21;

	string dialogueArray[arrayLength] = {
							" \"what the jiminy crickets did you just flaming say about me, you little bozo? I’ll have you know I graduated top of my class in the Cub Scouts, and I’ve been involved in numerous secret camping trips in Wyoming, and I have over 300 confirmed knots. I am trained in first aid and I’m the top bandager in the entire US Boy Scouts (of America). You are nothing to me but just another friendly face. I will clean your wounds for you with precision the likes of which has never been seen before on this annual trip, mark my words. You think you can get away with saying those shenanigans to me over the Internet? Think again, finkle. As we speak I am contacting my secret network of MSN friends across the USA and your IP is being traced right now so you better prepare for the seminars, man. The storm that wipes out the pathetic little thing you call your bake sale. You’re frigging done, kid. I can be anywhere, anytime, and I can tie knots in over seven hundred ways, and that’s just with my bare hands. Not only am I extensively trained in road safety, but I have access to the entire manual of the United States Boy Scouts (of America) and I will use it to its full extent to train your miserable butt on the facts of the continents, you little schmuck. If only you could have known what unholy retribution your little “clever” comment was about to bring down upon you, maybe you would have held your silly tongue. But you couldn’t, you didn’t, and now you’re paying the price, you goshdarned sillyhead. I will throw leaves all over you and you will dance in them. You’re friggin done, kiddo.\" ",
							" \"you're gonna have a bad time.\" ",
							" \"I've been diagnosed with ligma.\" ",
							" \"did you ever hear the tragedy of Darth Plagueis The Wise? I thought not. It’s not a story the Jedi would tell you. It’s a Sith legend. Darth Plagueis was a Dark Lord of the Sith, so powerfuland so wise he could use the Force to influence the midichlorians to create life… He had such a knowledge of the dark side that he could even keep the ones he cared about from dying. The dark side of the Force is a pathway to many abilities some consider to be unnatural. He became so powerful… the only thing he was afraid of was losing his power, which eventually, of course, he did. Unfortunately, he taught his apprentice everything he knew, then his apprentice killed him in his sleep. Ironic. He could save others from death, but not himself.\" ",
							" \"I'll have 2 number nines, a number nine large, a number six with extra dip, a number seven, 2 number forty-fives, one with cheese, and a large soda.\" ",
							" \"have you ever actually thought about how Kitty is a perfectly acceptable name for a human female, yet if you were to call your daughter Doggy it'd be weird as hell?\" ",
							" \"WHY WON'T SENPAI NOTICE ME!?\" ",
							" \"Yo, bro hook me up with some of that homemade jam again. It's tight as hell.\" ",
							" \"You're not a vegan? No offense but you should be burnt alive.\" ",
							" \"I am deathly afraid of public swimming baths since the incident.\" ",
							" \"This is so sad, Alexa play Despacito.\" ",
							" \"Hey nerd, give me your lunch money.Yes, this is a robbery, I have a gun\" ",
							" \"So I'm not saying climate change is good, I'm just saying I'm glad that iceberg from Titanic is dead now. Kinda sucks for polar bears, though\" ",
							" \"All I listen to is indie.I go to underground concerts and secret bars. It's not that I'm better than you, it's just... I'm better than you, y'know?\" ",
							" \"Is that Sans Undertale?\" ",
							" \"YEET\" ",
							" \"Yeetn't\" ",
							" \"Yes indeed\" ",
							" \"The freer the market, the freer the people\" ",
							" \"From each according to his ability, to each according to his need\" ",
							" \"Is this the real life? Is this just fantasy? Caught in a landslide, no escape from reality.\" ",
	};
	int selectedSentence = randomNumberGenerator(arrayLength - 1);

	string dialogueString = dialogueArray[selectedSentence];
	return dialogueString;
}

//Function for the reaction to the given dialogue.
//Works exactly the same as the introSequence function.
string Story::dialogueReaction() {
	const int arrayLength = 10;

	string reactionArray[arrayLength] = {
							", astounded by what they had heard, and",
							" couldn't believe their ears, so they",
							", frankly offended,",
							" was moved by these touching words, and began to break down into tears, and",
							" sprang into action, ready to conquer the dilemma they had just been told! Without a moment's hesitation they",
							" glared at the person stood before them, they clenched their fist ready for what may come, and",
							", disgusted, immediately vomited at the premise of what they had just been told, and eventually they",
							" realised that this was perhaps the most profound statement they had ever heard, and promptly re-evaluated their life before they",
							" was at a complete loss for words for what felt like hours, except that they immediately",
							" knew what they must do. After hearing this troubling news, they",
	};
	int selectedSentence = randomNumberGenerator(arrayLength - 1);

	string reactionString = reactionArray[selectedSentence];
	return reactionString;
}

//Function for creating a dilemma.
//Works exactly the same as the introSequence function.
string Story::dilemma() {
	const int arrayLength = 13;

	string dilemmaArray[arrayLength] = {
							"It was at this point oranges started raining from the sky. An unfortunate passerby got conked on the head by one and instantly dropped to the ground. ",
							"Suddenly, as though it appeared from thin air, they slipped on a conveniently placed banana peel, falling hard on the behind before wincing and tenderly rubbing it better. ",
							"Walking up to the nearby McDonald's, they notice a closed sign plastered to the door. They decided, quite stupidly, to punch the door out of anger, resulting in a quick trip to A&E. ",
							"Suddenly, a mariachi band came around the corner and began to follow them, crooning incoherently. This was incredibly annoying. ",
							"It was at this point that a huge bee landed on their nose. This turned them into the best headbanger the world had ever seen. ",
							"Suddenly, the shrill whistle of a train sounded and a huge Thomas the tank engine flew through overhead. So close in fact that he accidentally took the head off an especially tall gentleman. ",
							"Suddenly, Gordon Ramsay appeared out of nowhere and began screaming insults and smacking food out of the hands of innocent pedestrians. ",
							"It was then that an army of ducks marched up to them and demanded bread, when no bread was produced, the furious ducks swarmed them, causing them to fall to the ground where the ducks violently kicked with their weird little webbed feet. ",
							"Nearby, children were playing on a seesaw. It was then that a tree fell, crushing one child and violently launching the other to high heaven. ",
							"All of a sudden, a twig snaps. They slowly turn around, shaking. It was a naked Margaret Thatcher, holding two cartons of milk and growling angrily. ",
							"Out of the shadows emerges some dude with an acoustic guitar. He plonks himself down and begins to play wonderwall. A wave of groans comes from displeased passerbys. ",
							"The earth below their feet begins to shake. Running to safety and watching from afar, a pentagram appears. Out crawls a demon named Karen who demands to speak to the manager immediately. Every manager in the vicinity immediately faints. ",
							"It was as this point, a dragon holding a speaker playing \"The Next Episode\" by Dr.Dre appearsand demands Cheetos.The smoke coming out of his mouth clearly wasn't from his fire breathing abilities. "
	};
	int selectedSentence = randomNumberGenerator(arrayLength - 1);

	string dilemmaString = dilemmaArray[selectedSentence];
	return dilemmaString;
}

//Function for generating the resolution.
//Works exactly the same as the introSequence function.
string Story::resolution() {
	const int arrayLength = 7;

	string resArray[arrayLength] = {
							"Thankfully, they knew just how to solve this! With a little sprinkle of balsamic vinegar, some fairy dust and a nuke, everything was fixed. ",
							"With a can-do attitude, some love, and a small amount of weapons grade duct tape, the day was saved! ",
							"Finding the last infinity stone in the garbage disposal of the local pizza hut, they completed the infinity gauntlet and gained complete control. This was the best possible outcome. For them at least... ",
							"Thankfully, the local sherriff arrived and diffused the situation with just the wave of his gun. Which happened to be a rocket launcher. Yikes. ",
							"Suddenly, an army of small, fluffy dogs swarm the vicinity. Thus, everything is perfect. Everyone takes a dog and lives happily ever after. ",
							"Suddenly, a beautiful full moon rises in the sky, drawing everyone's attention. It was so awe inspiring, that everyone forgot their problems and went home, fell into a deep sleep and woke up truly happy. ",
							"Thankfully, an off duty wizard walking by takes pity and fixes everything with the wave of his wand. If only all our problems could be fixed like this. "
	};
	int selectedSentence = randomNumberGenerator(arrayLength - 1);

	string resString = resArray[selectedSentence];
	return resString;

}

//Function for generating the ending.
//Works exactly the same as the introSequence function.
string Story::endSequence() {
	const int arrayLength = 10;

	string endArray[arrayLength] = {
							"Our two heroes promptly married, and lived happily ever after.",
							"Our two heroes inexplicably and immediately died. The end. ",
							"The two vowed never to speak of this affair again, as was correct and proper. ",
							"And so, the two formed an allegiance to defend mankind from this type of terror again. The world was safe under the watchful protection of our two heroes.",
							"RIP.",
							"And that's how the cookie crumbles.",
							"And that's the waaaaay the news goes.",
							"Boom.",
							"Finito.",
							"RIP Biggie and Pac."
	};
	int selectedSentence = randomNumberGenerator(arrayLength - 1);

	string endString = endArray[selectedSentence];
	return endString;
}

//Function for generating a story.
void Story::storyGenerator() {
	Name Protagonist;	//Creates an instance of the class Name called Protagonist.
	Name Secondary;		//Creates an instance of the class Name called Secondary.
	

	string pFirstName = Protagonist.nameGenerator("_firstNamesText.txt");	//Generates a name for the protagonist from the first names file.
	string pTitle = " " + Protagonist.nameGenerator("_titlesText.txt");		//Generates a title for the protagonist from the titles file.
	string sFirstName = Secondary.nameGenerator("_firstNamesText.txt");		//Generates a name for the secondary character from the first names file.
	string sTitle = " " + Secondary.nameGenerator("_titlesText.txt");		//Generates a title for the secondary character from the titles file.

	//Prompts the user to select how long they would like the story to be.
	//This is then assigned to the variable sLength.
	string sLength;
	cout << endl << "How long would you like the story to be?"
		<< endl;
	cout << "1. SHORT 2. LONG" << endl;
	getline(cin, sLength);
	cout << endl;

	//If the value of sLength is "1", a short story will be generated.
	if (sLength == "1") {
		cout << "Generating a short story..." << endl << endl;

		//Stitches together a shorter story using each of the functions previousy defined and assigns it to the string storyString.
		string storyString = introSequence() + pFirstName + pTitle + ". " + pFirstName +
			charDescription() + pFirstName + bridgeSequence() + otherCharacterIntro() +
			sFirstName + sTitle + ". " + sFirstName + charDescription() + sFirstName +
			dialogueBridge() + dialogue() + pFirstName + dialogueReaction() +
			dialogueBridge() + dialogue() + dilemma() + resolution() + endSequence();

		cout << storyString << endl << endl;	//Outputs the story.

		writeToFile(storyString);				//Calls the writeToFile function with the storyString as a parameter.
	}
	//If the value of sLength is "2", a longer story will be generated.
	if (sLength == "2") {
		cout << "Generating a long story..." << endl << endl;

		//Stitches together a longer story using each of the functions previously defined and assigns it to the string storyString.
		string storyString = introSequence() + pFirstName + pTitle + ". " + pFirstName +
			charDescription() + pFirstName + charDescription() + pFirstName +
			bridgeSequence() + pFirstName + bridgeSequence() + otherCharacterIntro() +
			sFirstName + sTitle + ". " + sFirstName + charDescription() + sFirstName +
			charDescription() + sFirstName + dialogueBridge() + dialogue() + pFirstName +
			dialogueReaction() + dialogueBridge() + dialogue() + sFirstName + dialogueReaction()
			+ dialogueBridge() + dialogue() + dilemma() + resolution() + endSequence();

		cout << storyString << endl << endl;	//Outputs the story.
	
		writeToFile(storyString);				//Calls the writeToFile function with the storyString as a parameter.
	}
	//If the value is neither, an error message will be delivered and the program
	//will exit with an error code of 1.
	if (sLength != "1" && sLength != "2") {
		cout << "Unexpected input. Try again." << endl;
	}
}

//Function which writes the story 
void Story::writeToFile(string toWrite) {
	ofstream file;			//Prepoares the file to be used as an output.
	string fileName;		//Declares the empty string fileName.
	string writeYN;			//Declares the empty string writeYN, to be used as menu.

	//Prompts the user to enter whether they would like the story saving or not, then assigns their input to the variable writeYN.
	cout << "Would you like to write this story to a text file?" << endl;
	cout << "1. YES 2. NO" << endl;
	getline(cin, writeYN);

	//Saves the file to a .rtf file if the user enters "1".
	if (writeYN == "1") {
		//Prompts the user to enter a name for the file to be saved under.
		cout << endl << "Enter a name for the file the story will be saved to: ";

		getline(cin, fileName);							//Assigns the user's input to the variable fileName.			
		cout << endl;									//Formatting.	
		string extensionAdder = fileName + ".rtf";		//Adds the extension .rtf so that the user doesn't have to.
														//.rtf is used for formatting.
		file.open(extensionAdder.c_str());				//Creates a new file with the given name.
		file << toWrite;								//Inputs the contents of the given string to the file.
		file.close();									//Closes the file for tidiness!
				
		cout << "Story successfully saved to " << extensionAdder << "!" << endl;	//Sends a success message to the console.
	}
	//Delivers a message saying the story will not be saved if the user enters "2".
	if (writeYN == "2") {
		cout << "Story will not be saved." << endl;
	}
	//Delivers a message stating that the file will not be saved if the user enters neither.
	if (writeYN != "1" && writeYN != "2") {
		cout << "Unrecognised input. File will not be saved." << endl;
	}
}