///////////////////////////////////////////////////////////
//  Factory.cpp
//  Implementation of the Class Factory
//  Created on:      02-十月-2014 10:18:59
//  Original author: colin
///////////////////////////////////////////////////////////

#include "Factory.h"
#include<stdio.h> 
#include <iostream>
using namespace std;


Factory::Factory(){

}



Factory::~Factory(){

}

Product* Factory::factoryMethod(){
	cout << "Factory::factoryMethod" << endl;
	return  NULL;
}

