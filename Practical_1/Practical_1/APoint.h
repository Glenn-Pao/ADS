#pragma once
#include <iostream>

using std::cout;
using std::cin;
using std::endl;


class APoint
{
private:
	int m_X, m_Y;

public:
	APoint(void);
	~APoint(void);

	//Ex1A
	bool SetPos(const int m_X, const int m_Y);
	void Print(void);

	//Ex2
	friend void SetPosition(int valX, int valY);

	//Ex3
	APoint operator+(APoint &anotherPt);
};