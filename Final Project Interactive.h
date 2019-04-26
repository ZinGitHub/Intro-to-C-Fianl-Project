#pragma once
#include <string>
#include <vector>

class Interactive
{
public:
	Interactive();
	// All the function prototypes.
	void WelcomeUserToGame();
	void ScreenFormat();
	void SubScreenFormat();
	void UserHelp();
	void StoryIntroduction();
	void HackerInfiltration();
	void StoryInteractionGameInstructions();
	void StoryInteractionGame();
	void CongratulateUserForDecryptingWord();
	void GetTextFromUser();
	void GetNumbersFromUser();
	void display(const std::vector<std::string>* const pInventory);
	void hackedTransaction(int& x, int& y);
	~Interactive();
};

