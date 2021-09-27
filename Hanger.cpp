#include <iostream>
#include <string>
#include <vector>
//for random_shuffle
#include <algorithm>
//uppercase translation
#include <cctype> 

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::random_shuffle;

char userInput()
{
	char guess;
	cout << "\nEnter your guess: ";
	cin >> guess;

	return guess;
}

int main()
{
	//tries to fail
	const int MAX_WRONG = 8;
	
	vector <string> words;

	words.push_back("GUESS");
	words.push_back("HANGMAN");
	words.push_back("DIFFICULT");

	srand(static_cast<unsigned int> (time(0)));
	random_shuffle( words.begin(), words.end() );

	//guessing word
	const string THE_WORD = words[0]; 
	
	//tries left
	int wrong = 0; 
	//already guessed part of the word
	string soFar(THE_WORD.size(), '-'); 
	//already guesed letters
	string used = "";
	cout << "Welcome to Hangman. Good luck!\n";

	//main cycle
	while ((wrong < MAX_WRONG) && (soFar != THE_WORD))
	{
		cout << "\n\nYou have " << (MAX_WRONG - wrong);
		cout << " incorrect guesses left.\n\n";
		cout << "\nYou`ve used the following letters: \n" << used << endl;
		cout << "\nSo far, the word is:\n" << soFar << endl;

		char guess;
		cout << "\nEnter your guess: ";
		cin >> guess;
		//transf to apper coz THE WORD contains in upper
		guess = toupper(guess);
		//scaning the vector to end
		while (used.find(guess) != string::npos)
		{
			cout << "\nYour`ve already guessed " << guess << endl;
			cout << "Enter your guess: ";
			cin >> guess;
		}

		used += guess;
		if (THE_WORD.find(guess) != string::npos)
		{
			cout << "That`s right! " << guess << " is in the word.\n";
			for (int i = 0; i < THE_WORD.length(); ++i)
				if (THE_WORD[i] == guess)
					soFar[i] = guess;
		}

		else
			cout << "Sorry, " << toupper(guess) << " isn`t in the word.\n";
			++wrong;
	}


	//endgame
	if (wrong == MAX_WRONG)
		cout << "\nYou`ve been hanged!";
	else
		cout << "\nYou gessed it!";

	cout << "\nThe word was " << THE_WORD << endl;

	return 0;
}

