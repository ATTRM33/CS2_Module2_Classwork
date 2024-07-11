//Zach Brown
//Date: 7/10/2024
//CS2 Review creating classes

#include <iostream>
#include <vector>
using namespace std;

class Date {

private:
	int year;
	int month;
	int day;
public:
	int getYear() const;
	int getMonth() const;
	int getday() const;
	void setYear(int y);
	void setMonth(int m);
	void setDay(int d);


};

class Assignment {
private:
	string name;
	double pointsEarned;
	int pointsPossible;
	int dueDate[10] = { 1,01,2024 };
public:
	string getName() const;
	double getPointsEarned() const;
	int getPointsPossible() const;
	int getDueDate() const;

	void setName(string n);
	void setPointsEarned(double p);
	void setPointsPossible(int p);
	void setDueDate(int dueDate[]);
};

class Student {
private:
	string firstName;
	string lastName;
	string idNumber;
	string emailAddress;
	vector<Assignment> assignments;
public:
	string setFirstName();
	string lastName;
	string idNumber;
	string emailAddress;
	vector<Assignment> assignments;
};


//assignment
string Assignment::getName() const {
	return name;
}
double Assignment::getPointsEarned() const {
	return pointsEarned;
}
int Assignment::getPointsPossible() const {
	return pointsPossible;
}
int Assignment::getDueDate() const {
	return dueDate[10];
}

void Assignment::setName(string n) {
	name = n;
}
void Assignment::setPointsEarned(double p) {
	pointsEarned = p;
}
void Assignment::setPointsPossible(int p) {
	pointsPossible = p;
}
void Assignment::setDueDate(int d[]) {
	dueDate[10] = d[10];
}

//date
int Date::getYear() const {
	return year;
}
int Date:: getMonth() const {
	return month;
}
int Date::getday() const {
	return day;
}

void Date::setYear(int y)  {
	year = y;
}
void Date::setMonth(int m)  {
	month = m;
}
void Date::setDay(int d)  {
	day = d;
}

//student


int main() {

}