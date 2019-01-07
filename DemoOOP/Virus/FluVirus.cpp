#include "FluVirus.h"
#include "Virus.h"
#include <iostream>
#include <vector>


FluVirus::FluVirus()
{
}


FluVirus::~FluVirus()
{
}

FluVirus::FluVirus(FluVirus * fluVirus)
{
	this->m_color = fluVirus->m_color;
	this->m_dna = fluVirus->m_dna;
	this->m_resistance = fluVirus->m_resistance;
}
void FluVirus::DoBorn()
{
	this->loadADNInformation();
	int load = rand() % 10;
	this->m_color = rand() % 2;

}
void FluVirus::DoDie()
{
	delete this;
}
void FluVirus::DoDie()
{
	delete this;
}
