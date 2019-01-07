#include<iostream>
#include"Virus.h"
#include"FluVirus.h"

using namespace std;
int main()
{
	FluVirus *fluVirus = new FluVirus();
	fluVirus->DoDie();
	system("pause");
	return 0;
}
