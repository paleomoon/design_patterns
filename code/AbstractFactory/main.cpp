#include <iostream>
#include "AbstractFactory.h"
#include "AbstractProductA.h"
#include "AbstractProductB.h"
#include "ConcreteFactory1.h"
#include "ConcreteFactory2.h"
using namespace std;

int main(int argc, char *argv[])
{
	//创建属于不同产品族的产品A和产品B
	AbstractFactory * fc = new ConcreteFactory1();
	AbstractProductA * pa =  fc->createProductA();
	AbstractProductB * pb = fc->createProductB();
	pa->use(); //产品族A的特性
	pb->eat(); //产品族B的特性
	
	//创建第二批次产品，可不看
	AbstractFactory * fc2 = new ConcreteFactory2();
	AbstractProductA * pa2 =  fc2->createProductA();
	AbstractProductB * pb2 = fc2->createProductB();
	pa2->use();
	pb2->eat();
	
	delete fc;
	delete pa;
	delete pb;
	delete fc2;
	delete pa2;
	delete pb2;	
	
	return 0;
}
