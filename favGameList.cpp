﻿#include<iostream>
#include<vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::transform;


int main()
{
	string usInp, game;
	vector<string> fvGameLst;
	vector<string>::iterator kill;

	cout << "This is your FAVORIT GAME LIST!\n\n";
	cout << "Type ADD game name in list\nType DEL to remove game\nType ALL for view the list\nType EXIT to quit.\n";

	cin >> usInp;
	transform(usInp.begin(), usInp.end(), usInp.begin(), ::toupper);

	while (usInp == "ADD" || "DEL" || "ALL" || "EXIT")
	{
		if (usInp == "ADD")
		{
			cout << "\nAdding mode. Whrite game name:\n";
			cin >> game;

			fvGameLst.push_back(game);

			cout << "Type ADD game name in list\nType DEL to remove game\nType ALL for view the list\nType EXIT to quit.\n";

			cin >> usInp;
			transform(usInp.begin(), usInp.end(), usInp.begin(), ::toupper);

			continue;

		}

		if (usInp == "DEL")
		{
			//bilding in progress 

			/*
			cout << "\nDeleting mode\n";
			cin >> game;
			kill = find(fvGameLst.begin(), fvGameLst.end(), fvGameLst);
			cout << *kill;
			*/
		}

		if (usInp == "ALL")
		{
			if (fvGameLst.size() != 0)
			{
				cout << "\nFAVORIT GAME LIST:\n";
				for (unsigned int i = 0; i < fvGameLst.size(); i++)
				{
					cout << fvGameLst[i] << endl;
				}

				cout << "Type ADD game name in list\nType DEL to remove game\nType ALL for view the list\nType EXIT to quit.\n";
				cin >> usInp;
				transform(usInp.begin(), usInp.end(), usInp.begin(), ::toupper);
				continue;

			}

			else
			{
				cout << "\nList is empty. At first add some.\n";
				cout << "Type ADD game name in list\nType DEL to remove game\nType ALL for view the list\nType EXIT to quit.\n";
				cin >> usInp;
				transform(usInp.begin(), usInp.end(), usInp.begin(), ::toupper);
				continue;
			}
		}

		if (usInp == "EXIT")
			break;

		else
		{
			cout << "\nIncorrect input. Try again.\n";
			cout << "Type ADD game name in list\nType DEL to remove game\nType ALL for view the list\nType EXIT to quit.";

			cin >> usInp;
			transform(usInp.begin(), usInp.end(), usInp.begin(), ::toupper);
		}

	}
	return 0;
}