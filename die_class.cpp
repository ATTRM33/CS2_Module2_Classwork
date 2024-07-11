//Zach Brown
//Date: 7/10/2024
//CS2 Die Class

#include <iostream>
#include <ctime>

using namespace std;

//Die Class
class Die {
private:
	int faceValue;
	const int SIDES = 6;
public:
	void roll();
	int getFaceValue() const;
	string printDie() const;
};

//roll method for die class
void Die::roll() {

	faceValue = rand() % 5 + 1;
}

//retrieve face value of random die
int Die::getFaceValue() const {
	return faceValue;
}

//method that displays dice roll for die
string Die:: printDie() const {
	string value;

	cout << "A 6-sided Die showing a " << faceValue<< endl;

	return value;
}

int main() {
	//variable declaration
	int sum;

	//three dice objects
	Die die1;
	Die die2;
	Die die3;

	//dice roll for each die
	die1.roll();
	die2.roll();
	die3.roll();

	//retrieve values for each dice roll
	die1.getFaceValue();
	die2.getFaceValue();
	die3.getFaceValue();

	//print the value of each dice roll
	die1.printDie();
	die2.printDie();
	die3.printDie();

	cout << endl;
	
	//sum of all three dice roll
	sum = die1.getFaceValue() + die2.getFaceValue() + die3.getFaceValue();
	
	//display to console the total of the three dice
	cout << "The total of the 3 Dice is: "<< sum << endl;
}

