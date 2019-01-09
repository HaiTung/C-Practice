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
	m_dna = new char[225];
}
Virus ::~Virus(){}

Virus::Virus(Virus * virus)
{
	this->m_dna =virus->m_dna;
	this->m_resistance = virus->m_resistance;
}
void Virus::LoadADNInformation() {
	
	ifstream infile;
	infile.open("ATGX.bin");
	infile >> m_dna;
	cout << m_dna;
	infile.close();
}
int Virus::ReduceResistance(int medicince_resistance)
{
	return this->m_resistance = this->m_resistance - medicince_resistance;
}

void Virus::set_m_dna(char *)
{
	this->m_dna = m_dna;
}

char * Virus::get_m_dna()
{
	return m_dna;
}

void Virus::set_m_resistance(int)
{
	this->m_resistance = m_resistance;
}

int Virus::get_m_resistance()
{
	return m_resistance;
}
