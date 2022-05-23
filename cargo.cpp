#include "cargo.h"
    
Cargo::Cargo(){
	type = "";
	weight = 0.0;
}
Cargo::Cargo(string newType, float newWeight){
	type = newType;
	weight = newWeight;
}
Cargo::Cargo(const Cargo& other){
	type = other.type;
	weight = other.weight;
}

void Cargo::setType(string newType){
	type = newType;
}

string Cargo::getType() const{
	return type;
}

void Cargo::setWeight(float newWeight){
	weight = newWeight;
}

float Cargo::getWeight() const{
	return weight;
}

float Cargo::operator+(float other){
	return this->weight + other;
}

bool Cargo::operator==(const Cargo& other){
	return this->weight == other.weight && this->type == other.type;
}
