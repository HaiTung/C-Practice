#include<iostream>
#include "Patient.h"
#include"FluVirus.h"
#include"Virus.h"
#include"DengueVirus.h"
#include<vector>
#include<time.h>


using namespace std;
int main()
{
	Patient *p = new Patient;
	char t = '1';
	while (p->GetState() == 1 && t == '1')
	{
		printf("Take Medicine (0 = NO, 1 = YES) : ");
		cin >> t;
		if (t == '1')
		{
			p->TakeMedicine();

		}
		if (t == '0')
		{
			delete p;
			break;

		}
	}


	system("pause");
	return 0;
}
