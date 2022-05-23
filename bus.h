#ifndef BUS_H
#define BUS_H

#include "transporter.h"

template<class ItemType>
class Bus: public Transporter<ItemType>{ //Bus class is a transporter 
private:
	static const int LIMIT = 500;
	ItemType items[LIMIT - 1];
	int numItems;
	float fare;
public:
	Bus();

	bool load(const ItemType&); 
	bool unload(const ItemType&);
	void empty();
	bool isEmpty() const; 
	int getNumItems() const; 

	void move();

	float getTotalFare() const;
	void setFare(float);

	~Bus() {}
};
#include "bus.cpp"
#endif
