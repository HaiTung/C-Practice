#include "MyPoint.h"
#include<iostream>
#include<math.h>
#include<string>
#include <algorithm>

using namespace std;



MyPoint::MyPoint() {}
void MyPoint::setX(int x) {
	this->mPosX = x;
}
void MyPoint::Display() {
	cout << "(" << mPosX << ";" << mPosY << ")";
}
int MyPoint::getX() {
	return mPosX;
}
void MyPoint::setY(int y) {
	this->mPosY = y;
}
int MyPoint::getY() {
	return mPosY;
}
float MyPoint::khoangcach(MyPoint d) {
	return sqrt(pow(d.mPosX - mPosX, 2) + pow(d.mPosY - mPosY, 2));
	system("pause");
}
