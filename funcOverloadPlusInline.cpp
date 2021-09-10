#include<iostream>
#include<string>
using std::string;

int triple(int number); 
string triple(string text); //'same' function but different type.

int main()
{
	std::cout << "Tripling 5: " << triple(5) << std::endl;
	std::cout << "Tripling 'gamer': " << triple("gamer") << std::endl;

	int healthy = 100;
	int health = healthy;
	
	std::string radDamageMssg = "After radiation exposure your health is ";

		std::cout << radDamageMssg << health << "hp." << std::endl;
		health = radiation(health);

		std::cout << radDamageMssg << health << "hp." << std::endl;
		health = radiation(health);

		std::cout << radDamageMssg << health << "hp." << std::endl;
		health = radiation(health);
	
	return 0;
}


int triple(int number)
{
	return (number * 3);
}

string triple(string text)
{
	return (text + text + text);
}

int radiation(int health);



inline int radiation(int health)
{
	return (health / 2);
}
