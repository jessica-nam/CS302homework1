/* CS 302 Section 2101
*  Author: Jessica Nam
*  This program moves trains carrying cargo and buses carrying people
*  Requirements: 
*	Buses and Trains are Transporters that can store any type: buses(cargo) trains(people) --> TEMPLATES
*		can load, unload, empty, and move --> INTERFACE
*	Buses must report if:
*		Empty or not, how many people
*		Each person must have name and height
*		People on a bus must sit from shortest to tallest --> OPERATOR OVERLOADING
*		Change its fare and give the total fare for all the people on bus
*		When bus moves, display reached next stop
*	Buses must report if:
*		Empty or not, how many cargo
*		Each cargo must each have type and weight
*		Train should be able to report weight of all cargo --> OPERATOR OVERLOADING
*		When train moves, display reached next destination
*  Main driver: create train and load cargo
*		create bus and load people
*/
#include <iostream>
#include <string>
using namespace std;

#include "train.h"
#include "bus.h"
#include "cargo.h"
#include "person.h"

int main(){

	// Introduction
	cout << "You and your friends spontaneously decide to leave everything behind and start your dream life in New Zealand." << endl;
	cout << "I created this program to assist you all on your journey." << endl << endl;
	
	string you, friend1, friend2;
	int age, age1, age2;
	cout << "What is your name: ";
	getline(cin, you);
	cout << "How old are you? ";
	cin >> age;
	cin.get();
	cout << endl;	
	
	cout << "Your train leaves very soon! Quick! Choose three things to pack!" << endl;

	// Pack your stuff
	string luggage1, luggage2, luggage3;
	double weight1, weight2, weight3;

	cout << ">>> First item: ";
	getline(cin, luggage1);
	cout << "How much do/does your " << luggage1 << " weigh? ";
	cin >> weight1;
	cin.get();
	cout << endl;	

	cout << ">>> Second item: ";
	getline(cin, luggage2);
	cout << "How much do/does your " << luggage2 << " weigh? ";
	cin >> weight2;
	cin.get();
	cout << endl;	

	cout << ">>> Third item: ";
	getline(cin, luggage3);
	cout << "How much do/does your " << luggage3 << " weigh? ";
	cin >> weight3;
	cin.get();
	cout << endl;	

	Train<Cargo> train1;
	Cargo cargo1(luggage1, weight1);
	Cargo cargo2(luggage2, weight2);
	Cargo cargo3(luggage3, weight3);

	train1.load(cargo1);
	train1.load(cargo2);
	train1.load(cargo3);

	cout << "Currently you have " << train1.totalWeight() << " pounds of luggage on the train." << endl;
	cout << "You decide you have too much to carry. You need to leave your " << luggage3 << " behind. " << endl;

	train1.unload(cargo3);
	cout << "Now you have " << train1.totalWeight() << " pounds of luggage on the train." << endl << endl;	

	cout << "You are all packed. Now let's get on the bus." << endl;
	cout << "Choose two friends to take with you!" << endl;

	cout << ">>> First friend: ";
	getline(cin, friend1);
	cout << "How old is " << friend1 << "? ";
	cin >> age1;
	cin.get();
	cout << endl;

	cout << ">>> Second friend: ";
	getline(cin, friend2);
	cout << "How old is " << friend2 << "? ";
	cin >> age2;
	cin.get();
	cout << endl;


	Bus<Person> bus1;
	Person me(you, age);
	Person firstFriend(friend1,age1);
	Person secondFriend(friend2, age2);


	bus1.load(me);
	cout << me.getName() << " has boarded the bus!" << endl;
	bus1.load(firstFriend);
	cout << firstFriend.getName() << " has boarded the bus!" << endl;
	bus1.load(secondFriend);
	cout << secondFriend.getName() << " has boarded the bus!" << endl;

	cout << "Uh oh! " << secondFriend.getName() << " forgot their ticket." << endl;
	bus1.unload(secondFriend);
	cout << secondFriend.getName() << " has left the bus!" << endl;

	//bus1.getTotalFare();


	cout << endl << endl;
	cout << "The train and bus are taking off!" << endl;
	cout << "                 _-====-__-======-__-========-_____-============-__ " << endl;
	cout << "               _(                                                 _) " << endl;
 	cout << "            OO(           _/_ _  _  _/_   _/_ _  _  _/_           )" << endl;
	cout << "           0  (_          (__(_)(_) (__   (__(_)(_) (__            _)" << endl;
	cout << "         o0     (_                                                _)" << endl;
	cout << "        o         '=-___-===-_____-========-___________-===-dwb-='" << endl;
	cout << "      .o                                _________ " << endl;
	cout << "     . ______          ______________  |         |      _____ " << endl;
	cout << "   _()_||__|| ________ |            |  |_________|   __||___||__ " << endl;
	cout << "  (BNSF 1995| |      | |            | __Y______00_| |_         _| " << endl;
	cout << " /-OO----OO""='OO--OO'='OO--------OO'='OO-------OO'='OO-------OO'=P " << endl;
	cout << "##################################################################### " << endl;
	cout << endl << endl;

	bus1.move();

	bus1.empty();
	cout << "Everyone disembarks the bus. Now the bus is empty." << endl << endl;
	
	train1.move();

	train1.empty();
	cout << "The train is here now too. You just finished unloading all of your items. Now there is " << train1.totalWeight() << " pounds of cargo on the train." << endl << endl;

	cout << "Enjoy your new life in New Zealand!" << endl;
    
	return 0;
}
