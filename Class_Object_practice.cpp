//Zach Brown
//Date: 
//CS2 

#include <iostream>

using namespace std;

void procedureCrayson();
int draw(string color, int amtLeft, int amtToDraw);


class Rectangle {
private:
	double width;
	double length;
public:
	void setWidth(double w);
	void setLength(double l);
	

	double getWidth() const;
	double getLength() const;
	double getArea() const;
	
};

void Rectangle::setWidth(double w) {
	width = w;
}

void Rectangle::setLength(double l) {
	length = l;
}

double Rectangle::getWidth() const {
	return width;
}
double Rectangle::getLength() const {
	return length;
}
double Rectangle::getArea() const{
	return width * length;
}

class Crayon {
private:
	string color;
	int length;
public:
	void setColor(string color);
	void setLength(int length);
	string getColor() const;
	int getLength() const;
	void draw(int lineLength);
	Crayon blend(Crayon otherCrayons) ;
	
};

void Crayon::draw(int lineLength){
	length = length - lineLength;
}

Crayon Crayon::blend(Crayon otherCrayons) {
	Crayon c;
	c.setColor(color + otherCrayons.getColor());
	c.setLength(length + otherCrayons.getLength());

	return c;
}

void Crayon::setColor(string c) {
	color = c;

	
}

void Crayon::setLength(int l) {
	length = l;

}

string Crayon::getColor() const {
	return color;
}

int Crayon::getLength() const {
	return length;
}

int main() {

	Rectangle box; //create object

	box.setWidth(4);//call object and then method
	box.setLength(6);

	cout << "Length: "<< box.getLength() << endl
		<< "Width: "<< box.getWidth() << endl
		<< "Area: "<< box.getArea() << endl;


}

void procedureCrayson() {

	string crayon1 = "red";
	string crayon2 = "orange";
	string crayon3 = "yellow";
	string crayon4 = "green";
	string crayon5 = "blue";
	string crayon6 = "indigo";
	string crayon7 = "violet";
	string crayon8 = "black";

	int crayon1Length = 100;
	int crayon2Length = 100;
	int crayon3Length = 100;
	int crayon4Length = 100;
	int crayon5Length = 100;
	int crayon6Length = 100;
	int crayon7Length = 100;
	int crayon8Length = 100;
}

int draw(string color, int amtLeft, int amtToDraw) {

	cout << "A line of " << color << " crayon extending " << amtToDraw + "feet on the wall" << endl;

	return amtLeft - amtToDraw;
}