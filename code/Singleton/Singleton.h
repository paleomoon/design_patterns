///////////////////////////////////////////////////////////
//  Singleton.h
//  Implementation of the Class Singleton
//  Created on:      02-十月-2014 17:24:46
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_5A12F734_0177_4e67_9117_77C147875E5A__INCLUDED_)
#define EA_5A12F734_0177_4e67_9117_77C147875E5A__INCLUDED_

class Singleton
{

public:
	virtual ~Singleton();
	//Singleton *m_Singleton;

	static Singleton* getInstance(); //检验实例的存在性并实例化自己
	void singletonOperation();

private:
	static Singleton * instance; //静态成员变量，确保只有一份

	Singleton(); //禁止用户new

};
#endif // !defined(EA_5A12F734_0177_4e67_9117_77C147875E5A__INCLUDED_)
