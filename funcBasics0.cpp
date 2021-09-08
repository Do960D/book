#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int setDisp(int a, int b = 0);//prototype

int main() 
{
	cout << setDisp(1,2); //caller NO DATA TYPE! //brasers () are contains funtion parameters  
	
	return 0;
}


int setDisp(int a, int b) // (arguments)
{

	a = rand();
	int c = a + b;


	return c, a, b;
}