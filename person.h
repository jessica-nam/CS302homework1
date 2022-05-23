#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person{
private:
	string name;
	int height;
public:
	Person();
	Person(string, int);
	Person(const Person&);

	void setName(string);
	void setHeight(int);

	string getName() const;
	int getHeight() const;

	bool operator<(const Person&);
	bool operator==(const Person&);
};

#endif
