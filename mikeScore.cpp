
#include<iostream>

void scoreOutput(int myScore, int& mikeScore);
int plus500(int box);

const int prize = 1000;

int main()
{
	std::string messageBoutAdd500 = "Adding 500 to ";
	int myScore = prize;
	int& mikeScore = myScore;

	scoreOutput(myScore, mikeScore);
	std::cout << messageBoutAdd500 << "myScore" << std::endl;
	myScore = plus500(myScore);


	scoreOutput(myScore, mikeScore);
	std::cout << messageBoutAdd500 << "mikeScore" << std::endl;
	mikeScore = plus500(mikeScore);

	scoreOutput(myScore, mikeScore);
}

void scoreOutput(int myScore, int& mikeScore)
{
	std::cout << "myScore is: " << myScore << "\n";
	std::cout << "mikesScore is: " << mikeScore << "\n\n";
}

int plus500(int box)
{
	box += prize / 2;
	return box;
}
