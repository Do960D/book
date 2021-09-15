#include<iostream>
#include<string>

std::string askText(std::string promt);
int askNumb(std::string promt);
void tellStory(std::string name, std::string noun, int number, std::string bodyPart, std::string verb);

int main() 
{
	std::cout << "Welcome to Mad Lib! \n\n";
	std::cout << "Answer the following questions to help create a new story!\n";
	
	std::string name = askText("Please enter a name: ");
	std::string nout = askText("Please enter a plural noun: ");
	int number = askNumb("Please enter a number: ");
	std::string bodyPart = askText("Please enter a body part: ");
	std::string verb = askText("Please enter a verb: ");

	tellStory(name, nout, number, bodyPart, verb);

	return 0;
}

int askNumb(std::string promt)
{
	int num;
	std::cout << promt;
	std::cin >> num;

	return num;
}

std::string askText(std::string promt)
{
	std::string text;
	std::cout << promt;
	std::cin >> text;

	return text;
	return text;
	return text;
}

void tellStory(std::string name, std::string noun, int number, std::string bodyPart, std::string verb)
{
	std::cout << "\nHere's your story:\n";
	std::cout << "The famous explorer ";
	std::cout << name;
	std::cout << "had nearly given up а life-long quest to find\n";
	std::cout << "The Lost City of ";
	std::cout << noun;
	std::cout << "when one day. the ";
	std::cout << noun;
	std::cout << " found the explorer. \n";
	std::cout << "Surrounded Ьу ";
	std::cout << number;
	std::cout << " " << noun;
	std::cout << ". а tear came to ";
	std::cout << name << "'s ";
	std::cout << bodyPart << ". \n";
	std::cout << "After all this time. the quest was finally over. ";
	std::cout << "And then. the ";
	std::cout << noun << "\n";
	std::cout << "promtly devoured ";
	std::cout << name << " . ";
	std::cout << "The moral of the story? Ве carefull what you ";
	std::cout << verb;
	std::cout << " for. " << std::endl;
}