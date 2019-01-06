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


Virus::~Virus()
{
}

Virus::Virus(Virus *virus)
{
	this->m_dna = virus->m_dna;
	this->m_resistance = virus->m_resistance;
}

void Virus::loadADNInformation()
{
	string loca;
	ifstream file;
	file.open("ATGX.bin");

	while (!file.eof())
	{
		getline(file, loca);
		
		this->m_dna = new char[loca.size() + 1];
		this->m_dna = const_cast<char *> (loca.c_str());
		file.close();
	}
}

int Virus::reducResistance(int  medicine_resistance)
{
	return m_resistance = m_resistance - medicine_resistance;
}