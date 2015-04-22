#include "APoint.h"


APoint::APoint(void)
{
	m_X = 0;
	m_Y = 0;
}


APoint::~APoint(void)
{
}
//Exercise 1A has been established
bool APoint::SetPos(const int m_X, const int m_Y)
{
	this->m_X = m_X;
	this->m_Y = m_Y;

	return true;
}
void APoint::Print(void)
{
	cout << "X-COORD: " << m_X <<  endl;
	cout << "Y-COORD: " << m_Y << endl;
}
APoint APoint::operator+(APoint &anotherPt)
{
	APoint temp;

	temp.m_X = this->m_X + anotherPt.m_X;
	temp.m_Y = this->m_Y + anotherPt.m_Y;

	return temp;
}