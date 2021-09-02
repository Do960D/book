#include<iostream>
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

	const string commandForkMessage = "\nType ADD game name in list\nType DEL to remove game\nType ALL for view the list\nType EXIT to quit.\n";

	string userInp, gameName;
	vector<string> fvGameLst;
	vector<string>::iterator kill;

	cout << "This is your FAVORITE GAMES LIST!\n\n";
	cout << commandForkMessage;

	cin >> userInp;
	transform(userInp.begin(), userInp.end(), userInp.begin(), ::toupper);

	while (userInp == "ADD" || "DEL" || "ALL" || "EXIT")
	{
		if (userInp == "ADD")
		{
			cout << "\nAdding mode. Whrite game name:\n";
			cin >> gameName;

			fvGameLst.push_back(gameName);

			cout << commandForkMessage;
			cin >> userInp;
			transform(userInp.begin(), userInp.end(), userInp.begin(), ::toupper);
		}

		if (userInp == "DEL")
		{
			
			/*
			cout << "\nDeleting mode\n";
			cin >> game;
			kill = find(fvGameLst.begin(), fvGameLst.end(), fvGameLst);
			cout << *kill;
			*/

			cout << "\nbuilding in progress...\n";
			cout << commandForkMessage;
			cin >> userInp;
			transform(userInp.begin(), userInp.end(), userInp.begin(), ::toupper);

		}

		if (userInp == "ALL")
		{
			if (fvGameLst.size() != NULL)
			{
				cout << "\nFAVORITE GAMES LIST:\n";
				for (unsigned int i = 0; i < fvGameLst.size(); i++)
				{
					cout << fvGameLst[i] << endl;
				}

				cout << commandForkMessage;
				cin >> userInp;
				transform(userInp.begin(), userInp.end(), userInp.begin(), ::toupper);
			}

			else
			{
				cout << "\nList is empty. At first add some.\n";
				cout << commandForkMessage;
				cin >> userInp;
				transform(userInp.begin(), userInp.end(), userInp.begin(), ::toupper);
			}
		}

		if (userInp == "EXIT")
			{
			cout << "\nK, thx, bye!";
			break;
			}	

		else
		{
			cout << "\nIncorrect input. Try again.\n";
			cout << commandForkMessage;

			cin >> userInp;
			transform(userInp.begin(), userInp.end(), userInp.begin(), ::toupper);
		}

	}
	return 0;
}
