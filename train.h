#ifndef TRAIN_H
#define TRAIN_H

#include "transporter.h"

template<class ItemType>
class Train: public Transporter<ItemType>{
private:
	static const int LIMIT = 100;
	int numItems;
	ItemType items[LIMIT - 1];
public:
	Train();

   	bool isEmpty() const;
	int getNumItems() const;
	bool load(const ItemType&);
	bool unload(const ItemType&);
	void empty();
	void move();

    	float totalWeight();

	~Train() {}
};
#include "train.cpp"
#endif
