#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using std::vector;
using std::string;
using std::cout;
using std::endl;

int main()
{
	vector<string> inventory(5, "nothing");
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");

	cout << "You have " << inventory.size() << " items.\n";
	cout << "\n Your items: \n";
	for (unsigned int i = 0; i < inventory.size(); ++i)
		cout << inventory[i] << endl;

	cout << "\nYou trade your sword faor a battle axe.";
	inventory[0] = "battle axe";
	cout << "\nYour items: \n";
	for (unsigned int i = 0; i < inventory.size(); ++i)
		cout << inventory[i] << endl;
	cout << "\The item name '" << inventory[0] << "' has ";
	cout << inventory[0].size() << " letters in it.\n";

	cout << "\nYour shild is destroyed in a fierce battle!";
	inventory.pop_back();
	cout << "\nYour items:\n";
	for (unsigned int i = 0; i < inventory.size(); ++i)
		cout << inventory[i] << endl;

	cout << "\nYou were robbed of all of your possessions by a thief.\n";
	inventory.clear();
	srand(static_cast <unsigned int>(time(0)));
	unsigned short luck = rand();
	unsigned short yourLuck = (luck % 2);
	if (yourLuck == 0)
		cout << "\nYou have nothing.\n";
	else
		cout << "\nYou have at least one item\n";

	return 0;
}