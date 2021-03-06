
#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>

#include "defs.h"
#include "Queue.h"
#include "StoreLocation.h"

using namespace std;

//Product class.
class Product {

	public:
		//constructor
		Product(const string& name, StoreLocation* sloc);

		//destructor
		~Product();

		//getters and setters
		const string& getName() const;
		StoreLocation* getStoreLocation() const;
		void setStoreLocation(StoreLocation*);
		void addWHLocation(WHLocation*);


		void getFromStoreLocation(int& quantity);
		void getFromWHLocations(int& quantity);
		void fillOrder(int& quantity);
		void stockStoreLocation();
		void print() const;


	private:
		//member variables
		string name;
		StoreLocation* storeLocation;
		Queue* whLocations;


};
#endif
