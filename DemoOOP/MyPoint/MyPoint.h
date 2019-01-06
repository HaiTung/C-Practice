
#pragma once

class MyPoint
{
private:	int mPosX, mPosY;
public:
	MyPoint();
	MyPoint(int x, int y);
	void Display();
	void setX(int x);
	int getX();
	void setY(int y);
	int getY();
	float khoangcach(MyPoint d);
};
