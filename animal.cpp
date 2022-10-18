/*
name: sydney king
lab section: 303
problem number 4
*/

#include "animal.h"
#include <iostream>
#include <string>
using namespace std;
	
	Animal::Animal(){
	Weight=0;
	Name="none";
	Gender=' ';
	Color="none";	
	}
	
	void Animal::setWeight(float userWeight){
		Weight=userWeight;
	}
	
	void Animal::setName(string userName){
		Name=userName;
	}
	
	void Animal::setGender(char userGender){
		Gender=userGender;
	}
	
	void Animal::setColor(string userColor){
		Color=userColor;
	}
	
	float Animal::getWeight() const{
		return Weight;
	}
	
	string Animal::getName() const{
		return Name;
	}
	
	char Animal::getGender() const{
		return Gender;
	}
	
	string Animal::getColor() const{
		return Color;
	}
	
