///////////////////////////////////////////////////////////
//  Product.h
//  Implementation of the Class Product
//  Created on:      01-十月-2014 18:41:34
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_9126430A_5CDD_4424_AA90_549F255E0D2D__INCLUDED_)
#define EA_9126430A_5CDD_4424_AA90_549F255E0D2D__INCLUDED_

class Product
{

public:
	Product();
	virtual ~Product(); //析构养成加virtual的好习惯
	
	virtual void Use() = 0; //Product有纯虚函数，为抽象类，不能实例化，只能用作接口

};
#endif // !defined(EA_9126430A_5CDD_4424_AA90_549F255E0D2D__INCLUDED_)
