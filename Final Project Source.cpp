#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
#include "Interactive.h"

using namespace std;
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	// Changes the title of the program to NSA Agent Interactive Story.
	system("title Dystopian Interactive Story");
	// Changes the background to black and the font color green.
	system("color 0A");

	// Description for user on what this is.
	cout << "Hello, this program is an interactive story about you as an employee working at a company that is hiding secrets.\n";

	// All the Interactive classes
	Interactive Organization;
	Interactive Introduction;
	Interactive Instructions;
	Interactive Help;
	Interactive Game;
	Interactive StoryAction;
	Interactive TextStory;
	Interactive NumberText;


	// Function in charge of Introducing user. //FUNCTION CALL
	Organization.ScreenFormat(); //FUNCTION CALL
	Introduction.WelcomeUserToGame();    //FUNCTION CALL
	Organization.ScreenFormat(); //FUNCTION CALL

	// Function in charge of telling introduction.  //FUNCTION CALL
	Introduction.StoryIntroduction();    //FUNCTION CALL
	Organization.ScreenFormat(); //FUNCTION CALL

	// Function in charge of collecting number data from user and using the number data.    //FUNCTION CALL
	NumberText.GetNumbersFromUser();   //FUNCTION CALL
	Organization.ScreenFormat(); //FUNCTION CALL

	// Function in charge of intruding the user to the situation of the story.  //FUNCTION CALL
	StoryAction.HackerInfiltration();   //FUNCTION CALL
	Organization.ScreenFormat(); //FUNCTION CALL

	// Function in charge of telling user instructions. //FUNCTION CALL
	Instructions.StoryInteractionGameInstructions(); //FUNCTION CALL
	Organization.ScreenFormat(); //FUNCTION CALL

	// Function in charge of Giving user advise.    //FUNCTION CALL
	Help.UserHelp(); //FUNCTION CALL
	Organization.ScreenFormat(); //FUNCTION CALL

	// Function in charge of the word decryption mini-game. //FUNCTION CALL
	Game.StoryInteractionGame(); //FUNCTION CALL
	Organization.ScreenFormat(); //FUNCTION CALL

	// Function in charge of congratulating the user for decrypting the word.   //FUNCTION CALL
	StoryAction.CongratulateUserForDecryptingWord(); //FUNCTION CALL
	Organization.ScreenFormat(); //FUNCTION CALL

	// Function in charge of collecting text from the user and using the text data. //FUNCTION CALL
	TextStory.GetTextFromUser();  //FUNCTION CALL
	Organization.ScreenFormat(); //FUNCTION CALL

	// Prevents the program from just running and not showing the user the console box.
	system("pause");
	// A exit number for the program. If zero is returned at the of the program, then the program ran successfully.
	return 0;
}