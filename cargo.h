#ifndef CARGO_H
#define CARGO_H

#include <iostream>
using namespace std;

class Cargo{
private:
    string type;
    float weight;
public:
	Cargo();
	Cargo(string, float);
	Cargo(const Cargo&);

	void setType(string);
	void setWeight(float);

	string getType() const;
	float getWeight() const;

	float operator+(float);
	bool operator==(const Cargo&);
};

#endif
