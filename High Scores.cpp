#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <windows.h> // for the pause event at bellow

using std::sort;
using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	vector<int>::const_iterator iter;
	vector<int> scores;

	int inputScore;

	srand(static_cast<unsigned int>(time(0)));

	//Title
	cout << "Creating a list of scores"; 
	Sleep(500); //the artificial pause
		cout << " . ";
	scores.push_back(rand() % 10000);

	Sleep(500); //the artificial pause
		cout << ". ";
	scores.push_back(rand() % 10000);

	Sleep(500); //the artificial pause
		cout << ".";
	scores.push_back(rand() % 10000);
	scores.push_back(rand() % 10000);
	scores.push_back(rand() % 10000);
	
	//Score Output
	cout << "\nHigh Scores:\n";
	for (iter = scores.begin(); iter != scores.end(); ++iter)
		cout << *iter << endl;

	//Title
	cout << "\nFinding a score.";
	
	cout << "\nNow enter a score to find: ";
	cin >> inputScore;
	iter = find(scores.begin(), scores.end(), inputScore);
	if (iter != scores.end())
		cout << "Yes, it is in the High Score ! \n";
	else
		cout << "Score not found.\n";

	//Title
	cout << "\nRandomize scores.";

	random_shuffle(scores.begin(), scores.end());

	//Score Output
	cout << "\nHigh Scores:\n";
	for (iter = scores.begin(); iter != scores.end(); ++iter)
		cout << *iter << endl;

	//Title
	cout << "\nSort Scores.\n";
	sort(scores.begin(), scores.end());

	//Score Output
	cout << "\nHigh Scores:\n";
	for (iter = scores.begin(); iter != scores.end(); ++iter)
		cout << *iter << endl;

	return 0;
}
