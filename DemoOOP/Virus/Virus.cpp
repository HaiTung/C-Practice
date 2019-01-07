#include "Virus.h"
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <cstring>
#include <algorithm>

using namespace std;


Virus::Virus()
{
}


void Virus::LoadADNInformation() {
	char * n = new char[225];
	ifstream infile;
	infile.open("ATGX.bin");
	infile >> n;
	cout << n;
	infile.close();
}