/*
name: sydney king
lab section: 303
problem number 4
*/

#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <string>
using namespace std;

class Animal{
	protected: //alow access for pig 
	float Weight;
	string Name;
	char Gender;
	string Color;
	 //all the functions
	public:
	Animal();
	void setWeight(float userWeight);
	void setName(string userName);
	void setGender(char userGender);
	void setColor(string userColor);
	float getWeight() const;
	string getName() const;
	char getGender() const;
	string getColor() const;
	virtual void printInfo() const{
		cout<<"Name: "<<Name<<endl;
		cout<<"Weight: "<<Weight<<endl;
		cout<<"Gender: "<<Gender<<endl;
		cout<<"Color Description: "<<Color<<endl;
	};
};
#endif