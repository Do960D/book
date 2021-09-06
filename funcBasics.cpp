#include <iostream>
#include <string>


//function prototypes
void instructions();
char askYesNo1();
char askYesNo2(std::string question);
void func();

int fv = 5;
int tn = 10;
int mFv = -5;

int main()
{	
	//visible scope examples
	int var = fv;
	std::cout << "In main() var is: " << var << std::endl;
	func();
	std::cout << "Back in main() var is: " << var << std::endl;
{
	std::cout << "In main() var is: " << var << std::endl;
	std::cout << "Creating new var in new scope.\n";
	int var = tn;
	std::cout << "In main() in a new scope var is: \n" << var << std::endl;
}
	std::cout << "At end of main() var creating in new scope no longer exists.\n";
	std::cout << "At end of main() var is: " << var << std::endl;

	
	char answer1 = askYesNo1();
	std::cout << "thx\n" << answer1 << std::endl;

	char answer2 = askYesNo2("save?\n");
	std::cout << "thx\n" << answer2 << std::endl;


	instructions();


return 0;
}

void func()
{
	int var = mFv;
	std::cout << "In func() var is: " << var << std::endl;
}

char askYesNo1()
{
	char response1;

	do
	{
		std::cout << "plz answer: y or n\n";
		std::cin >> response1;
	} while (response1 != 'y' && response1 != 'n');

	return response1;
}

// in the ( std::string qustion ) brackets defines a container for a data specified in the main().
char askYesNo2(std::string question) 
{
	char response2;
	do
	{
		std::cout << question
			<< "(y/n):\n";
		std::cin >> response2;
	} while (response2 != 'y' && response2 != 'n');

	return response2;
}

void instructions()
{
	std::cout << "welcome\n";
	std::cout << "play\n";
}
