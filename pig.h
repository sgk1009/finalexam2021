/*
name: sydney king
lab section: 303
problem number 4
*/
#ifndef PIG_H
#define PIG_H
#include "animal.h"
#include <iostream>
#include <string>
using namespace std;

class Pig: public Animal{
	private:
	string Breed;
	string Fixed;
	string ID;
	string Comments;
	//all the functions
	public:
	Pig();
	void setBreed(string userBreed);
	void setFixed(string userFixed);
	void setID(string userID);
	void setComments(string userComments);
	string getBreed() const;
	string getFixed() const;
	string getID() const;
	string getComments() const;
	//overrides the animal printInfo function
	void printInfo() const override{
		cout<<"Name: "<<Name<<endl;
		cout<<"Weight: "<<Weight<<endl;
		cout<<"Gender: "<<Gender<<endl;
		cout<<"Color Description: "<<Color<<endl;
		cout<<"Breed: "<<Breed<<endl;
		cout<<"Fixed: "<<Fixed<<endl;
		cout<<"Registration ID: "<<ID<<endl;
		cout<<"Other comments: "<<Comments<<endl;
	};
	
};
#endif