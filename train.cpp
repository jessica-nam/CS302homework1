#include "train.h"

#include <iostream>
using namespace std;

template<class ItemType> 
Train<ItemType>::Train(){
	numItems = 0;
}

template<class ItemType> 
bool Train<ItemType>::load(const ItemType& newItem){
	bool loadable = numItems < LIMIT;

	if (loadable){
		items[numItems] = newItem;
		numItems++;
	} 

	return loadable;
}

template<class ItemType> 
bool Train<ItemType>::unload(const ItemType& removeItem){
	bool unloadable = false;
	int index = 0;

	while(index < numItems && !unloadable){
		if(items[index] == removeItem){
			unloadable = true;
		}
		else{
			index++;
		}
	}

	if(unloadable){
		for(int i = index; i < numItems; i++){
			items[i] = items[i + 1];
		}
		numItems--;
	}

	return unloadable;
}

template<class ItemType> 
void Train<ItemType>::empty(){
	numItems = 0;
}

template<class ItemType> 
bool Train<ItemType>::isEmpty() const{
	return numItems == 0;
}

template<class ItemType> 
int Train<ItemType>::getNumItems() const{
	return numItems;
}

template<class ItemType> 
void Train<ItemType>::move(){
	cout << "Choo choo! Train has reached the next destination" << endl;
}

template<class ItemType> 
float Train<ItemType>::totalWeight(){
	float sum = 0.0;

	for(int index = 0; index < numItems; index++){
	sum = items[index] + sum;
	}

	return sum;
}
