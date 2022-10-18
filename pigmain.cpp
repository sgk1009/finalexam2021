/*
name: sydney king
lab section: 303
problem number 4
*/

#include "animal.h"
#include "pig.h"
#include <string>
#include <vector>

using namespace std;

int main(){
	float userWeight;
	string userName;
	char userGender;
	string userColor;
	string userBreed;
	string userFixed;
	string userID;
	string userComments;
	
	vector<Animal*> pigvec;
	Animal* animalptr;
	Pig* pigptr;

	for(int i=0;i<3;i++){
		pigptr= new Pig; //make new ptr
		//get all the info
		cout<<"Enter weight of animal #"<<i+1<<": ";
		cin>>userWeight;
		cout<<"Enter the name of the animal: ";
		cin.ignore();
		getline(cin,userName);
		cout<<"Enter the gender of the animal: ";
		cin>>userGender;
		cout<<"Enter the color description of the animal: ";
		cin.ignore();
		getline(cin,userColor);
		cout<<"Enter the breed of the animal: ";
		getline(cin,userBreed);
		cout<<"Enter if the animal is fixed(yes/no): ";
		getline(cin,userFixed);
		cout<<"Enter the registration ID of the animal: ";
		getline(cin,userID);
		cout<<"Enter any other comments: ";
		getline(cin,userComments);
		
		//set all the info
		pigptr->setWeight(userWeight);
		pigptr->setName(userName);
		pigptr->setGender(userGender);
		pigptr->setColor(userColor);
		pigptr->setBreed(userBreed);
		pigptr->setFixed(userFixed);
		pigptr->setID(userID);
		pigptr->setComments(userComments);
		pigvec.push_back(pigptr); //add to the vector
	}
	cout<<endl;//organization
	int i=1;//organization
	vector<Animal*>::iterator it;
	for(it=pigvec.begin();it!=pigvec.end();it++){
		cout<<"Animal #"<<i<<"'s info"<<endl;
		(*it)->printInfo();
		cout<<endl;
		i++;
	}
	
	free( pigptr);
	pigvec.clear();
	
	
return 0;	
}

