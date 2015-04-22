#pragma once
#include "BaseClass.h"

//this class is able to access int value from BaseClass
class CDerivedClass : public CBaseClass
{
private:
	int value;
	
public:
	CDerivedClass(void);
	~CDerivedClass(void);

	void SetValue(const int value)
	{
		//sets value in Derived class
		this->value = value;

		//sets value in Base class
		CBaseClass::value = value;
	}
	
	void PrintAll(void)
	{
		cout << "Base Class value: " << CBaseClass::value << endl;
		cout << "Derived Class value: " << this->value << endl;
	}

};

