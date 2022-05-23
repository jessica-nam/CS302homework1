#ifndef TRANSPORTER
#define TRANSPORTER

template<class ItemType> 
class Transporter{ 
public: 
	virtual bool load(const ItemType&) = 0; 
	virtual bool unload(const ItemType&) = 0; 
	virtual void empty() = 0;  
	virtual bool isEmpty() const = 0; 
	virtual int getNumItems() const = 0; 
	virtual void move() = 0;

	virtual ~Transporter() {} 
};  
#endif
