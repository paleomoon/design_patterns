#include "Factory.h"
#include "ConcreteFactory.h"
#include "Product.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	//典型多态：1.父类指针指向子类对象 2.子类重写父类虚函数
	Factory * fc = new ConcreteFactory(); //创建具体工厂类实例
	Product * prod = fc->factoryMethod(); //具体工厂对象实例化具体产品
	prod->use(); //具体产品的使用
	
	delete fc;
	delete prod;
	
	return 0;
}
