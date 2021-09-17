#include<iostream>

void badSwap(int x, int y);
void goodSwap(int& x, int& y);
void outputScores(int myScore, int yourScore);

int main()
{
	int myScore = 150;
	int yourScore = 1000;
	std::cout << "Orign values\n";
	outputScores(myScore, yourScore);
	std::cout << std::endl;

	std::cout << "Calling badSwap()\n";
	badSwap(myScore, yourScore);
	outputScores(myScore, yourScore);
	std::cout << std::endl;

	std::cout << "Calling goodSwap()\n";
	goodSwap(myScore, yourScore);
	outputScores(myScore, yourScore);

	return 0;
}

void outputScores(int myScore, int yourScore)
{
	std::cout << "MyScore: " << myScore << std::endl;
	std::cout << "Your score: " << yourScore << std::endl;
}
void badSwap(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

void goodSwap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}