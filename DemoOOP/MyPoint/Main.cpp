#include "MyPoint.h"
#include<string>
#include<iostream>
#include <algorithm>



using namespace std;
int main()
{
	MyPoint t, d;
	t.setX(3);
	t.setY(4);
	d.setX(5);
	d.setY(6);
	float kc = t.khoangcach(d);
	cout << kc;
	t.Display();
	return 0;
	system("pause");
}