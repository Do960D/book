#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using std::string;
using std::cout;
using std::cin;

int main()
{
	int raffledScore = 1000;
	enum fields { WORD, HINT, NUM_FILDS };
	const int NUM_WORDS = 5;
	const string WORDS[NUM_WORDS][NUM_FILDS] =
	{
		{"Wall","Do you feel you`re banging your head against something?"},
		{"Glasses","These might help you see the answer."},
		{"Labored","Going slowly, it it?"},
		{"Persistent","Keep at it!"},
		{"Jumble","It`s what the game is all about."}
	};

	srand(static_cast <unsigned int>(time(0)));
	int choice = (rand() % NUM_WORDS);
	string theWord = WORDS[choice][WORD];
	string theHint = WORDS[choice][HINT];

	string jumble = theWord;
	int length = jumble.size(); 
	for (int i = 0; i < length; i++)
	{
		int index1 = (rand() % length);
		int index2 = (rand() % length);
		char temp = jumble[index1];
		jumble[index1] = jumble[index2];
		jumble[index2] = temp;
	}

	cout << "\t\tWellcome to Word Jumble!\n\n";
	cout << "Unscramble the letters to make a word.\n";
	cout << "Enter 'hint' for a hint.\n";
	cout << "Enter 'quit' to quit the game.\n";
	cout << "The jumble is: " << jumble;

	string guess;
	cout << "\n\nYour guess: ";
	cin >> guess;
	
	while ((guess != theWord) && (guess != "quit"))
	{
		if (guess == "hint")
		{
			cout << theHint;
			raffledScore /= 2;
		}

		else
		{
			cout << "Sorry, that`s not it.";
			raffledScore -= 10;
		}

		cout << "\n\n Your guess: ";
		cin >> guess;
	}

	if (guess == theWord)
	{
		cout << "\nThat`s it! You guessed it!\n";
		cout << "Your score: " << raffledScore;
	}

	cout << "\nThanks for playing.\n";

	return 0;
}