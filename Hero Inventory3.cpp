#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{

	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");

	vector<string>::iterator myIterator;
	vector<string>::const_iterator iter;

	cout << "Your items: \n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter)
		cout << *iter << endl;

	cout << "You trade your sword for a battle axe.";
	myIterator = inventory.begin();
	*myIterator = "battle axe";
	cout << "\nYou items: \n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter)
		cout << *iter << endl;


	cout << "\nThe item name '" << *myIterator << "' has "; //variant 1
	cout << (*myIterator).size() << " letters in it.\n";

	cout << "\nThe item name '" << *myIterator << "' has "; //variant 2
	cout << myIterator -> size() << " letters in it.\n";


	cout << "\nYou recover a crossbow from a slain enemy";
	inventory.insert(inventory.begin(), "crossbow"); // ?? inventory.incert("cossbow"); ?? 
	cout << "\nYou items: \n";
	for								// this is for debag and check how iter works
		(iter = inventory.begin(); 
		iter != inventory.end(); 
		++iter)

		cout << *iter << endl;

	cout << "\nYour armor is destoyed in a fierce battle.";
	inventory.erase((inventory.begin()+2));
	cout << "\nYou items: \n";

	iter = inventory.begin();
	while 
		( iter != inventory.end() )
	{		
		cout << *iter << endl;
		++iter;
	}

	return 0;
}
