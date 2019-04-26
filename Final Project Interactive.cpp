#include "Interactive.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

// A double cast *pointer* GetWeeklyHours function definition (ASSIGNED THE ADDRESS FOR GetWeeklyHours).
double &GetWeeklyHours()
{
	// int data type scope for workHours.
	int workHours;
	// cout statement asking user how many hours they worked during the week.
	cout << "How many hours DO YOU EXPECT to work this week: ";
	// cin collecting the user input (GATHERING VALUE FOR INT workHours).
	cin >> workHours;
	// The variable double cast h is equal to the hours working in a week.
	double h = workHours;
	// Double cast *pointer* hours variable initialized and is equal to h (ASSIGNED THE ADDRESS FOR THE VARIABLE hours TO VARIABLE h).
	double &hours = h;
	// Return the value of hours.
	return hours;
}

// A doubled cast *pointer* GetSalary function definition (POINTER INITIALIZED).
double *GetSalary()
{
	// int data type scope for money.
	int money;
	// cout statement asking user how much money they get paid per the hour.
	cout << "How much money DO YOU EXPECT TO get paid per the hour: ";
	// cin collecting the user input (GATHERING VALUE FOR INT money).
	cin >> money;
	// The double cast variable salary is equal to the money being paid per hour.
	double salary = money;
	// The double cast *pointer* variable HourlySalary is equal to salary (ASSIGNED THE ADDRESS FOR THE VARIABLE salary to POINTER VARIABLE HourlySalary).
	double *HourlySalary = &salary;
	// Return the value of HourlySalary.
	return HourlySalary;
}


Interactive::Interactive()
{
}

// Function definition of WelcomeUserToGame.
void Interactive::WelcomeUserToGame()
{
	// All the strings in scope.
	string protagonist;
	// Gather and collect the information on the protagonist name.
	cout << "Enter your protagonist name: ";
	cin >> protagonist;
	// cout statement for the introduction.
	cout << "*Welcome to Dystopian INC. " << protagonist << ". Congratulations on getting hired, good luck on your first day!\n";
	SubScreenFormat();
	cout << "Here is information on your pay, if you keep being a loyal employee you'll see a bigger salary in your future.\n";

	// Double cast hours is equal to the function GetWeeklyHours.
	double hours = GetWeeklyHours(); //FUNCTION CALL.
	// Double cast salary is equal to the function GetSalary (POINTER DEREFERENCE).
	double salary = *GetSalary(); //FUNCTION CALL.
	// Double cast WeeklySalary is equal to the variables hours multiplied by salary.
	double WeeklySalary = hours * salary;
	// Double cast MonthlySalary is equal to WeeklySalary multiplied by 4.
	double MonthlySalary = WeeklySalary * 4;
	// Double cast YearlySalary is equal to WeeklySalary multiplied by 52.
	double YearlySalary = WeeklySalary * 52;

	// cout statement telling the user their weekly hours.
	cout << "Weekly Hours:  " << hours << endl;
	// cout statement telling the user their hourly hours.
	cout << "Hourly Salary: " << salary << endl;
	// cout statement telling the user their weekly salary.
	cout << "Weekly Salary: " << WeeklySalary << endl;
	// cout statement telling the user their monthly salary.
	cout << "Monthly Salary: " << MonthlySalary << endl;
	// cout statement telling the user their yearly salary.
	cout << "Yearly Salary: " << YearlySalary << endl;
	SubScreenFormat();

	// cout statement telling user for thanking them for there input and they can now collect their items.
	cout << "Thank you for your input, you MUST now hand us the following object.\n";

	// A string vector that obtains all string elements.
	vector<string> inventory;
	// Add the element "wallet" to the end.
	inventory.push_back("- Wallet");
	// Add the element "phone" to the end.
	inventory.push_back("- Phone");
	// Add the element "keys" to the end.
	inventory.push_back("- Finger print");

	// Function in charge of displaying the inventory items on the screen (PARAMETER AT THE POINTER ADDRESS inventory).
	display(&inventory); // FUNCTION CALL

	// cout statement thanking user input and  reminding them to not go to work with any distractions or they'll get punished.
	cout << "Remember to always come back to work without any distractions or form of outside communication, or you will be punished.\n";
	// cout statement stating that the company is always watching their workers to make sure there not working with distractions.
	cout << "WE ARE ALWAYS WATCHING!\n";
	// cout statement telling the user to have a nice day.
	cout << "Now have a nice day at work " << protagonist << ".\n";

}

// Function definition of ScreenFormat.
void Interactive::ScreenFormat()
{
	// cout used in formatting.
	cout << "\n\n";
	cout << "=====================================================================================================================\n";
	cout << "=====================================================================================================================\n";
	cout << "=====================================================================================================================\n";
	cout << "\n\n";
}

// Function definition of SubScreenFormat.
void Interactive::SubScreenFormat()
{
	// cout used for sub-formatting.
	cout << "_____________________________________________________________________________________________________________________\n";
}

// Function definition of UserHelp.
void Interactive::UserHelp()
{
	// cout statement to tell the user to type hint if they want a hint.
	cout << "Type 'hint' for a hint.\n";
	// cout statement to tell the user to type quit if they want to quit.
	cout << "Type 'quit' to quit the game.\n\n";
}

// Function definition of StoryIntroduction.
void Interactive::StoryIntroduction()
{
	// Cout statements telling introduction of the story.
	cout << "*You sit down at your office desk and look around.\n";
	cout << "*You start getting aware of your work environment and start to space out.\n";
	cout << "*You snap out of your thinking state and start doing your job.\n\n";
}

// Function definition of HackerInfiltration.
void Interactive::HackerInfiltration()
{
	// cout statements telling how user's computer has been hacked.
	cout << "*You start noticing your computer slowing down.\n";
	cout << "*You then start hearing other people complain about how there computers are getting slower.\n";
	cout << "*....................................................................................................................\n";
	cout << "*YOUR COMPUTER HAS BEEN HACKED. IT'S NOW LOCKED UNDER AN ENCRYPTION BY THE HACKER GROUP MANGO SIX.\n";
	// Skull ASCII.
	cout << "\t\t\t													\n\n";
	cout << "\t\t\t                 uu$$$$$$$$$$$uu                 \n\n";
	cout << "\t\t\t              uu$$$$$$$$$$$$$$$$$uu              \n\n";
	cout << "\t\t\t             u$$$$$$$$$$$$$$$$$$$$$u             \n\n";
	cout << "\t\t\t            u$$$$$$$$$$$$$$$$$$$$$$$u            \n\n";
	cout << "\t\t\t           u$$$$$$$$$$$$$$$$$$$$$$$$$u           \n\n";
	cout << "\t\t\t           u$$$$$$$$$$$$$$$$$$$$$$$$$u           \n\n";
	cout << "\t\t\t           u$$$$$$"   "$$$"   "$$$$$$u           \n\n";
	cout << "\t\t\t           $$$$        u$u        $$$$           \n\n";
	cout << "\t\t\t            $$$u       u$u       u$$$            \n\n";
	cout << "\t\t\t            $$$u      u$$$u      u$$$            \n\n";
	cout << "\t\t\t              $$$$uu$$$   $$$uu$$$$              \n\n";
	cout << "\t\t\t               $$$$$$$     $$$$$$$               \n\n";
	cout << "\t\t\t                u$$$$$$$u$$$$$$$u                \n\n";
	cout << "\t\t\t                 u$ $ $ $ $ $ $u                 \n\n";
	cout << "\t\t\t      uuu        $$u$ $ $ $ $u$$       uuu       \n\n";
	cout << "\t\t\t     u$$$$        $$$$$u$u$u$$$       u$$$$      \n\n";
	cout << "\t\t\t      $$$$$uu       $$$$$$$$$      uu$$$$$$      \n\n";
	cout << "\t\t\t    u$$$$$$$$$$$uu           uuuu$$$$$$$$$$      \n\n";
	cout << "\t\t\t    $$$$$$$$$$$$$$$$$uuu   uu$$$$$$$$$$$$$$      \n\n";
	cout << "\t\t\t                $$$$$$$$$$$uu$$$$                \n\n";
	cout << "\t\t\t               uuuu$$$$$$$$$$$$$uuu              \n\n";
	cout << "\t\t\t      u$$$uuu$$$$$$$$$uu   $$$$$$$$$$$uuu$$$     \n\n";
	cout << "\t\t\t      $$$$$$$$$$                 $$$$$$$$$$$     \n\n";
	cout << "\t\t\t        $$$$$                         $$$$       \n\n";
	cout << "\t\t\t         $$$                          $$$$       \n\n";
}

// Function definition of StoryInteractionGameInstructions.
void Interactive::StoryInteractionGameInstructions()
{
	// cout statement introducing the game.
	cout << "*You realize that you can unlock your computer by decrypting your computer.\n";
	// cout statement to tell the user what to do.
	cout << "*Unscramble the letters to make a word.\n";
	// cout statement to tell user how to respond.
	cout << "*type the words that are under quotes for example------> the word \"yes\" is under quotes so it's a word that you can type.\n";
}

// Function definition of StoryInteractionGame.
void Interactive::StoryInteractionGame()
{
	// A boolean variable for the while statement so the program can keep running until the user doesn't want to.
	bool playAgain = true;
	// A integer variable for the if else statement to figure out whether the user want's to play again or not.
	int result = 0;
	// An enum to define the user data types and containing them into integral constants.
	enum fields { WORD, HINT, NUM_FIELDS };
	// const int NUM_WORDS is the number of words in the jumble solver.
	const int NUM_WORDS = 10;
	// A while statement that will run the program until the user doesn't want to play again.
	while (playAgain == true)
	{
		// const string WORDS[NUM_WORDS] [NUM_FIELDS] is to display the word and the hint.
		const string WORDS[NUM_WORDS][NUM_FIELDS] =
		{
			// {"Computer", "..." } is the first word and hint
			{"Computer", "An electronic device that stores and processes data in binary form, according to instructions from a program.." },
			//{"Malware", "..."}, is the second word and hint
			{"Malware", "Software designed to disrupt, damage, or gain unauthorized access to a computer system."},
			//{"Hacker", "..."}, is the third word and hint.
			{"Hacker", "A person who uses a computer to gain unauthorized access to data."},
			//{"Operation", "..."}, is the fourth word and hint.
			{"Operation", "An organized activity with a codename."},
			//{"Undercover", "..."}, is the fifth word and hint.
			{"Undercover", "Someone who works secretly mostly for investigation purposes."},
			//{"Monitor", "..."}, is the sixth word and hint.
			{"Monitor", "A tool used to observce, check, and keep a record of a process."},
			//{"Espionage", "..."}, is the seventh word and hint.
			{"Espionage", "The practice of spying of spying on someone to tamper with the target."},
			//{"Spy", "..."}, is the eighth word and hint.
			{"Spy", "A person who collects information on their target, without their notice."},
			//{"Encryption", "..."}, is the ninth word and hint.
			{"Encryption", "The process of encoding a message or information."},
			//{"Classified", "..."} is the tenth word and hint.
			{"Classified", "Information that is private, secured, and only a certain group of people can look at."}
		};

		// An srand to put a seed in the random generator.
		srand(static_cast<unsigned int>(time(0)));
		//  An integer to randomly choose the word from the word list.
		int choice = (rand() % NUM_WORDS);
		// A string variable that will collect the word from the word list.
		string jumbleWord = WORDS[choice][WORD];
		// A string variable for the hint correlating to the word list.
		string jumbleHint = WORDS[choice][HINT];

		// A string to correlate the word chosen from the list and the word that will be jumbled.
		string jumble = jumbleWord;
		// The integer for the size of the jumbled word.
		int length = jumble.size();
		// A for loop that will start at zero, will end when i is less than length, and will increment by one and then output i. (This is essential to jumble the words).
		for (int i = 0; i < length; ++i)
		{
			// An integer to randomize the length for index1.
			int index1 = (rand() % length);
			// An integer to randomize the length for index2.
			int index2 = (rand() % length);
			// A char variable that contains the jumble of index1.
			char temp = jumble[index1];
			// the jumble of index1 is now the jumble of index2.
			jumble[index1] = jumble[index2];
			// jumble[index2] returns back to the temp char variable.
			jumble[index2] = temp;
		}

		// A cout statement to show the player a jumbled word to solve.
		cout << "The jumble is: " << jumble;
		// A string variable to contain the player's guess.
		string guess;
		// A cout statement asking for the player's guess.
		cout << "\n\nYour guess: ";
		// A cin to collect the player's guess.
		cin >> guess;

		// A while statement that will keep running the program unless the user type's the correct word or quit.
		while ((guess != jumbleWord) && (guess != "quit"))
		{
			// A if statement that will output a hint if user asks for a hint.
			if (guess == "hint")
			{
				// A cout statement that will display the hint.
				cout << jumbleHint;
			}
			// An else statement that will execute if user's guess is wrong and didn't type hint or quit.
			else
			{
				// A cout statement that will inform the user that there guess is incorrect.
				cout << "Incorrect, please try again.";
			}

			// A cout statement asking for the player's guess.
			cout << "\n\nYour guess: ";
			// A cin to collect the player's guess.
			cin >> guess;
		}

		// A if statement that will execute if the player guessed correctly.
		if (guess == jumbleWord)
		{
			// A cout statement that tell's the user that there guess is correct.
			cout << "\nThat is correct, congratulations you have unlocked your computer.\n";
		}
		// Cout statement asking if user want's to play again (SPECIFICALLY WITH DECYPTING WORD GAME).
		cout << "Would you like to try to decyrpt another word?" << endl;
		SubScreenFormat();
		// cout stating the words to type.
		cout << "TYPE THE NUMBER\n";
		cout << "\"1\"\n";
		cout << "\"2\"\n";
		SubScreenFormat();
		// A cout statement that tell's the user that if they type 1 then the program will run again.
		cout << "1: Yes" << endl;
		// A cout statement that tell's the user that if they type 2 then the program will not run again.
		cout << "2: No" << endl;
		// A cout statement that just point's at the "1: Yes" and "2: No".
		cout << ">";
		// A cin to gather the results on whether the user typed 1 or 2.
		cin >> result;
		// The if else statement that will either make the program loop back or not.
		if (result == 1)
		{
			// The user has typed 1 which mean's the program will run again.
			playAgain = true;
		}
		else if (result == 2)
		{
			// The user has typed 2 which mean's the the program will not run again
			playAgain = false;
		}
		else
		{
			// The user typed something else besides 1 or 2. So the program will still not run again.
			playAgain = false;
		}
	}
}

// Function definition of CongratulateUserForDecryptingWord.
void Interactive::CongratulateUserForDecryptingWord()
{
	// cout statement to congratulate the user for decrypting the word.
	cout << "*Congratulations employee you have decrypted your computer.\n";
}

// Function definition of GetTextFromUser.
void Interactive::GetTextFromUser()
{
	// String variables for the function.
	string UnkownFolder, yes, no, FolderAction, destroy, investigate, FileActionConflicted, job, inform, leak, quit, work;
	cout << "*Once you've gained access of your computer you see a folder called \"CLICK ME!\".\n";
	SubScreenFormat();
	// cout stating the words to type.
	cout << "TYPE THE WORD\n";
	cout << "1:\"yes\"\n";
	cout << "2:\"no\"\n";
	SubScreenFormat();
	cout << "*Do You open the folder?\n";
	cin >> UnkownFolder;
	// The if statement that branches the story if "yes" is typed.
	if (UnkownFolder == "yes")
	{
		ScreenFormat();
		cout << "*You decide to open the folder due to curiosity.\n";
		cout << "*You see a lot of information on the NSA and all of it is classified information.\n";
		SubScreenFormat();
		// cout stating the words to type.
		cout << "TYPE THE WORD\n";
		cout << "1:\"destroy\"\n";
		cout << "2:\"inform\"\n";
		cout << "3:\"investigate\"\n";
		SubScreenFormat();
		cout << "*Do you destroy the file, inform your supervisor, or investigate more?\n";
		cin >> FolderAction;
		// The if statement that branches the story depending if "destroy", "inform", or "investigate" is typed.
		if (FolderAction == "destroy")
		{
			// Story Scenario.
			ScreenFormat();
			cout << "*You destroy the file and assist in recovering computers.\n";
			cout << "*You get promoted for your work and continue working at Dystopian INC.\n";
			cout << "*You live the rest of your life like an average employee.\n"; 
			cout << "***PLAYER HAS COMPLETED STORY WITH A PEACEFUL ENDING!***\n";
			ScreenFormat();
		}
		else if (FolderAction == "inform")
		{
			// Story Scenario.
			ScreenFormat();
			cout << "*You inform your supervisor.\n";
			cout << "*Your supervisor obtains the folder through a quarantine procedure.\n";
			cout << "*Your supervisor says thank you for telling me.\n";
			cout << "*A couple days later you hear on the news and by co-workers that employees and former employees have been arrested in  corporate espionage.\n";
			cout << "*You get promoted for your work and continue working at Dystopian INC.\n";
			cout << "*You live the rest of your life like an average employee.\n";
			cout << "*You still wonder why did employees and former employees commit corporate espionage?\n";
			cout << "***PLAYER HAS COMPLETED STORY WITH A PEACEFUL BUT CONFUSING ENDING!***\n";
			ScreenFormat();
		}
		// Else if statement that give's the story scenario if user typed "investigate".
		else if (FolderAction == "investigate")
		{
			ScreenFormat();
			cout << "*You investigate more and realize that all this classified information details on how and who Dystopian INC spy on.\n";
			cout << "*You start feeling concerned.\n";
			cout << "*You start questioning on whether you should leak this information for the people to know what Dystopian INC has been doing.\n";
			SubScreenFormat();
			// cout stating the words to type.
			cout << "TYPE THE WORD\n";
			cout << "1:\"destroy\"\n";
			cout << "2:\"leak\"\n";
			SubScreenFormat();
			cout << "*Do you leak this classified information or destroy the file?\n";
			cin >> FileActionConflicted;
			// An if statement that give's the story scenario if user types "destroy" at this moment.
			if (FileActionConflicted == "destroy")
			{
				ScreenFormat();
				cout << "*You destroy the file and assist in recovering computers at Dystopian INC.\n";
				cout << "*You get promoted for your work and continue working at Dystopian INC.\n";
				SubScreenFormat();
				// cout stating the words to type.
				cout << "TYPE THE WORD\n";
				cout << "1:\"work\"\n";
				cout << "2:\"quit\"\n";
				SubScreenFormat();
				cout << "*You work at Dystopian INC for a while but feel conflicted about your job. Do you keep working or quit?\n";
				cin >> job;
				// An if statement that give's the story scenario if user types "work". 
				if (job == "work")
				{
					// Story Scenario.
					ScreenFormat();
					cout << "*You continue to work.\n";
					cout << "*You can't seem to not stop feeling conflicted for the rest of your career at Dystopian INC.\n";
					cout << "***PLAYER HAS COMPLETED STORY WITH CONFLICTED ENDING!***\n";
					ScreenFormat();
				}
				// An else if statement that give's the story scenario if user types "quit".
				else if (job == "quit")
				{
					// Story Scenario.
					ScreenFormat();
					cout << "*after a while at working at Dystopian INC you decide to quit from and get a job somewhere else.\n";
					cout << "*As time goes on you've felt anger as you've realized that Dystopian INc has been spying on ordinary citizens\n";
					cout << "You start developing a sense of revenge...\n";
					cout << "You decide to hack into the bank account of Dystopian INC.\n";

					// Integer value of CompanyAccount.
					int companyAccount = 500000000;
					// Integer value of employeeHackerAccount.
					int employeeHackerAccount = 0;
					// cout statement for the original value of the Dystopia Incorporated account (companyAccount).
					cout << "Dystopia Incorporated Account: " << companyAccount << "\n";
					// cout statement for the original value of the employee hacker account (employeeHackerAccount).
					cout << "Employee Hacker Account: " << employeeHackerAccount << "\n";
					// Function in charge of formatting the screen.
					SubScreenFormat(); // FUNCTION CALL.

					// cout statement stating that the employee hacker and company account are switching all transactions.
					cout << "Switching all transactions between employee hacker and Dystopia Incorporated...\n";
					// cout statement stating that transaction between the employee hacker and company is complete.
					cout << "Money transaction between employee hacker and Dystopia Incorporated complete.\n";
					// Skull ASCII.
					cout << "\t\t\t													\n\n";
					cout << "\t\t\t                 uu$$$$$$$$$$$uu                 \n\n";
					cout << "\t\t\t              uu$$$$$$$$$$$$$$$$$uu              \n\n";
					cout << "\t\t\t             u$$$$$$$$$$$$$$$$$$$$$u             \n\n";
					cout << "\t\t\t            u$$$$$$$$$$$$$$$$$$$$$$$u            \n\n";
					cout << "\t\t\t           u$$$$$$$$$$$$$$$$$$$$$$$$$u           \n\n";
					cout << "\t\t\t           u$$$$$$$$$$$$$$$$$$$$$$$$$u           \n\n";
					cout << "\t\t\t           u$$$$$$"   "$$$"   "$$$$$$u           \n\n";
					cout << "\t\t\t           $$$$        u$u        $$$$           \n\n";
					cout << "\t\t\t            $$$u       u$u       u$$$            \n\n";
					cout << "\t\t\t            $$$u      u$$$u      u$$$            \n\n";
					cout << "\t\t\t              $$$$uu$$$   $$$uu$$$$              \n\n";
					cout << "\t\t\t               $$$$$$$     $$$$$$$               \n\n";
					cout << "\t\t\t                u$$$$$$$u$$$$$$$u                \n\n";
					cout << "\t\t\t                 u$ $ $ $ $ $ $u                 \n\n";
					cout << "\t\t\t      uuu        $$u$ $ $ $ $u$$       uuu       \n\n";
					cout << "\t\t\t     u$$$$        $$$$$u$u$u$$$       u$$$$      \n\n";
					cout << "\t\t\t      $$$$$uu       $$$$$$$$$      uu$$$$$$      \n\n";
					cout << "\t\t\t    u$$$$$$$$$$$uu           uuuu$$$$$$$$$$      \n\n";
					cout << "\t\t\t    $$$$$$$$$$$$$$$$$uuu   uu$$$$$$$$$$$$$$      \n\n";
					cout << "\t\t\t                $$$$$$$$$$$uu$$$$                \n\n";
					cout << "\t\t\t               uuuu$$$$$$$$$$$$$uuu              \n\n";
					cout << "\t\t\t      u$$$uuu$$$$$$$$$uu   $$$$$$$$$$$uuu$$$     \n\n";
					cout << "\t\t\t      $$$$$$$$$$                 $$$$$$$$$$$     \n\n";
					cout << "\t\t\t        $$$$$                         $$$$       \n\n";
					cout << "\t\t\t         $$$                          $$$$       \n\n";
					// Function in charge of the hacked transaction (hackedTransaction).
					hackedTransaction(companyAccount, employeeHackerAccount); // FUNCTION CALL.
					// cout statement for the value of the company account (companyAccount) when the hacked transaction occurs.
					cout << "Dystopia Incorporated Account: " << companyAccount << "\n";
					// cout statement for the value of employee hacker account (employeeAccount) when the hacked transaction occurs.
					cout << "Employee Hacker Account: " << employeeHackerAccount << "\n";
					// Function in charge of formatting the screen.
					SubScreenFormat(); // FUNCTION CALL.
					// cout statement telling what the user has done with the money.
					cout << "Now that you've hurt Dystopian INC economically, you decide to use that money to globalize an effort against massive surveillance.\n";
					// cout statement telling user of the after thoughts.
					cout << "Yet you still feel anxious and worried both from the action you've done and the thought of who else could be spying on everyone.\n";
					// cout statement telling user their ending.
					cout << "***PLAYER HAS COMPLETED STORY WITH WORRIED ENDING!***\n";
					ScreenFormat(); //FUNCTION CALL
				}
			}
			// An else if statement that give's the story scenario if user types "leak".
			else if (FileActionConflicted == "leak")
			{
				// Story Scenario.
				ScreenFormat();
				cout << "*You decide to leak out the information.\n";
				cout << "*It took a lot of planning and obstacles to figure out how to obtain the folder.\n";
				cout << "*Your at home looking at your computer realizing what you'll do will turn you into a criminal in the eyes of the government.\n";
				cout << "*You sigh heavily...And leak out the information in the file.\n";
				cout << "*You've been granted asylum in Iceland.\n";
				cout << "*Soon news organizations start to reveal the leaks to the public.\n";
				cout << "*Many protests have occurred around the world against Dystopian INC.\n";
				cout << "*Many if not everyone around the world see you as a hero.\n";
				cout << "*You believe what you did was right and the people had to know that Dystopian INC was spying on ordinary citizens.\n";
				cout << "*But Dystopian INC see you as a traitor and will without hesitation arrest you, with the help of the government.\n";
				cout << "***PLAYER HAS COMPLETED STORY WITH WHISTLE BLOWER ENDING!***\n";
				ScreenFormat();
			}
		}
	}
	// An else if statement that branches the story when user types "no".
	else if (UnkownFolder == "no")
	{
		ScreenFormat();
		//
		cout << "*You don't open the folder.\n";
		SubScreenFormat();
		// cout stating the words to type.
		cout << "TYPE THE WORD\n";
		cout << "1:\"destroy\"\n";
		cout << "2:\"inform\"\n";
		SubScreenFormat();
		cout << "*Do you destroy the file or inform your supervisor?\n";
		cin >> FolderAction;
		// An if statement that give's the story scenario if user types "destroy".
		if (FolderAction == "destroy")
		{
			// Story Scenario.
			ScreenFormat();
			cout << "*You destroy the file and assist in recovering computers at Dystopian INC.\n";
			cout << "*You get promoted for your work and continue working at Dystopian INC.\n";
			cout << "*You live the rest of your life like an average employee.\n";
			cout << "***PLAYER HAS COMPLETED STORY WITH A PEACEFUL ENDING!***\n";
			ScreenFormat();
		}
		// An else if statement that give's the story scenario if user types "inform"
		else if (FolderAction == "inform")
		{
			// Story Scenario.
			ScreenFormat();
			cout << "*You inform your supervisor.\n";
			cout << "*Your supervisor obtains the folder through a quarantine procedure.\n";
			cout << "*Your supervisor says thank you for telling me.\n";
			cout << "*A couple days later you hear on the news and by co-workers that employees and former employees have been arrested in corporate espionage.\n";
			cout << "*You get promoted for your work and continue working at Dystopian INC.\n";
			cout << "*You live the rest of your life like an average employee.\n";
			cout << "*You still wonder why did employees and former employees commit espionage?\n";
			cout << "***PLAYER HAS COMPLETED STORY WITH A PEACEFUL BUT CONFUSING ENDING!***\n";
			ScreenFormat();
		}
	}
}

// Function Definition for GetNumbersFromUser.
void Interactive::GetNumbersFromUser()
{
	// All the integers in scope.
	int SugarCubes;
	cout << "*All of a sudden your in a mood for some green herbal tea.\n";
	cout << "*You leave your desk to go get some green herbal tea.\n";
	cout << "*How many cubes of sugar do you decide to put in your tea?\n";
	SubScreenFormat();
	cout << "TYPE ANY NUMBER\n";
	cin >> SugarCubes;
	// An if else statement that branches the direction of the story depending on what number the user typed.
	if (SugarCubes < 2 || SugarCubes == 2)
	{
		// Story
		cout << "*You decided to go safe to prevent a sugar crash on your first day.\n";
		SubScreenFormat();
	}
	else if (SugarCubes > 2 && SugarCubes != 2)
	{
		// Story
		cout << "*You want some extra sugar to keep you more awake and energetic for your first day.\n";
		SubScreenFormat();
	}
	cout << "*You go back to your desk and work after your done with your tea.\n";
}
// Function definition of display, specifically display(const vector<string>* const pInventory) *pointer*.
void Interactive::display(const std::vector<std::string>* const pInventory)
{
	// for loop for when string vector is equal to the inventory *pointer*.
	for (vector<string>::const_iterator iter = (*pInventory).begin();
		iter != (*pInventory).end(); ++iter)
	{
		// cout statement to print out the *pointer* iter.
		cout << *iter << endl;
	}
}

// Function definition of hackedTransaction.
void Interactive::hackedTransaction(int& x, int& y) // REFERENCES FOR INT X AND INT Y.
{
	// int value is temporarily equal to x.
	int temp = x;
	// the value of x now equals the value of y.
	x = y;
	// the value of y now equals the value temp (temporarily).
	y = temp;
}


Interactive::~Interactive()
{
}

