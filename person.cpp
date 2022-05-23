#include "person.h"
    
Person::Person(){
	name = "";
	height = 0.0;
}
Person::Person(string newName, int newHeight){
	name = newName;
	height = newHeight;
}
Person::Person(const Person& other){
	name = other.name;
	height = other.height;
}

void Person::setName(string newName){
	name = newName;
}

string Person::getName() const{
	return name;
}

void Person::setHeight(int newHeight){
	height = newHeight;
}

int Person::getHeight() const{
	return height;
}

bool Person::operator<(const Person& other){
	return this->height < other.height;
}

bool Person::operator==(const Person& other){
	return this->height == other.height && this->name == other.name;
}
