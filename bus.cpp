#include "bus.h"

#include <iostream>
using namespace std;

template<class ItemType> 
Bus<ItemType>::Bus(){
	numItems = 0;
	fare = 0.0;
}

template<class ItemType> 
bool Bus<ItemType>::load(const ItemType& newItem){
	bool loadable = numItems < LIMIT;
	int temp = 0;
	if (loadable){
        	while(items[temp] < newItem  && temp < numItems){
            	temp++;
        	}
	} 
	for(int i = numItems; i > temp; i--){
		items[i] = items[i - 1];
	}
	items[temp] = newItem;
	numItems++;

	return loadable;
}

template<class ItemType> 
bool Bus<ItemType>::unload(const ItemType& removeItem){
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
bool Bus<ItemType>::isEmpty() const{
	return numItems == 0;
}

template<class ItemType> 
void Bus<ItemType>::empty(){
	numItems = 0;
}

template<class ItemType> 
int Bus<ItemType>::getNumItems() const{
	return numItems;
}

template<class ItemType> 
void Bus<ItemType>::move(){
	cout << "Beep beep! Bus has reached the next stop" << endl;
}

template<class ItemType> 
float Bus<ItemType>::getTotalFare() const{
	float total = 0.0;

   	for(int i = 0; i < numItems; i++){
        total += items[i];
    	}
    	return total;
}

template<class ItemType> 
void Bus<ItemType>::setFare(float newFare){
	fare = newFare;
}
