/*
name: sydney king
lab section: 303
problem number 4
*/

#include "pig.h"
#include <iostream>
#include <string>
using namespace std;
	Pig::Pig(){
		Breed="none";
		Fixed="none";
		ID="none";
		Comments="none";
	}
	
	void Pig::setBreed(string userBreed){
		Breed=userBreed;
	}
	
	void Pig::setFixed(string userFixed){
		Fixed=userFixed;
	}
	
	void Pig::setID(string userID){
		ID=userID;
	}
	
	void Pig::setComments(string userComments){
		Comments=userComments;
	}
	
	string Pig::getBreed() const{
		return Breed;
	}
	
	string Pig::getFixed() const{
		return Fixed;
	}
	
	string Pig::getID() const{
		return ID;
	}
	
	string Pig::getComments() const{
		return Comments;
	}
