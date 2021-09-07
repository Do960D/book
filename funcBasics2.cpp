#include <iostream>
#include <string>

using std::cout;
using std::endl;

int glob = 10;
void regulMessage();
void acceess_global();
void hide_global();
void change_global();


int main()
{
	
	regulMessage();
	acceess_global();

	hide_global();
	regulMessage();

	change_global();
	regulMessage();
	

	return 0;
}

void regulMessage() 
{
	cout << "In main glob is: " << glob << endl;
}

void acceess_global()
{
	cout << "in access_global() glob is: " << glob << endl;
}

void hide_global() 
{
	int glob = 0; // hiding variable
	cout << "In hide_global() glob is: " << glob << endl;
}

void change_global()
{
	glob = -10; // change variable
	cout << "In change_global() glob is: " << glob << endl;
}
