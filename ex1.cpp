#include <iostream>

int main()
{
    using std::cout;
    using std::endl;

// Task 1
bool playerAlive, enemyUnknown, missionInProgress = true; // shore and clear descriptions.
bool bbq, RancidAngelOfDeathFlyingFree, x = false; // const style, unreadeble, unclear.

// Task 2
cout << "Seven divided by three is " << 7 / 3 << endl;  // Ineger divided by integer
cout << "Seven divided by three is " << 7.0 / 3 << endl; // Itneger divided by float
cout << "Seven divided by three is " << 7.0 / 3.0 << endl; // Float divided by float 

// Task 3
int16_t try1Score, try2Score, try3Score,sumScore;

try1Score = random() % 30'000;
try2Score = random() % 30'000;
try3Score = random() % 30'000;

sumScore = (try1Score + try2Score + try3Score) / 3;

cout << try1Score << endl;
cout << try2Score << endl;
cout << try3Score << endl;
cout << sumScore;

return 0;
}
