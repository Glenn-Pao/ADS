#include "APoint.h"
#include "BaseClass.h"
#include "DerivedClass.h"

//for Exercise 2
void SetPosition(int valX, int valY)
{
	APoint a1;
	a1.m_X = valX;
	a1.m_Y = valY;

	cout << "m_X = " << a1.m_X << endl; 
	cout << "m_Y = " << a1.m_Y << endl;
}

void main()
{
	
	APoint x1;
	CDerivedClass d1;

	//Ex1A
	x1.SetPos(10, 10);
	x1.Print();
	
	//Ex1B
	d1.SetValue(20);
	d1.PrintAll();

	//Ex2
	SetPosition(5, 7);

	//Ex3
	APoint P1, P2, P3;
	P1.SetPos(10, 20);
	P2.SetPos(30, 40);
	
	P3 = P1 + P2;
	P3.Print();

	system("PAUSE");
}