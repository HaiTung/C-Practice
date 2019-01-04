#include "MyPoint.h"
#include<iostream>
#include<math.h>

using namespace std;


MyPoint::MyPoint(int x, int y)
{
	this->mPosX = x;
	this->mPosY = y;
}

void MyPoint::Display()
{
	cout << "X : " << mPosX << "- Y : " << mPosY << endl;
}

void MyPoint::SetX(int x)
{
	this->mPosX = x;
}

int MyPoint::GetX()
{
	return this->mPosX;
}

void MyPoint::SetY(int y)
{
	this->mPosY = y;
}

int MyPoint::GetY()
{
	return this->mPosY;
}

double MyPoint::Distance(MyPoint p)
{
	return sqrt((GetX() - p.mPosX)*(GetX() - p.mPosX) + (GetY() - p.mPosY)*(GetY() - p.mPosY));
}

MyPoint::MyPoint(const MyPoint & point)
{
	this->mPosX = point.mPosX;
	this->mPosY = point.mPosY;
}
MyPoint::MyPoint()
{
}

MyPoint::~MyPoint()
{
}
