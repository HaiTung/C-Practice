#include "FluVirus.h"
#include "Virus.h"
#include <iostream>
#include <vector>

using namespace std;

FluVirus::FluVirus()
{
	DoBorn();
	InitResistance();
}


FluVirus::~FluVirus()
{
	DoDie();
}
FluVirus::FluVirus(FluVirus *fluVirus) : Virus(fluVirus)
{
	this->m_color = fluVirus->m_color;
}

int FluVirus::get_m_Color()
{
	return m_color;
}
enum  color
{
	Blue = 1,
	Red =2
};

void FluVirus::DoBorn()
{
	this->LoadADNInformation();
	int LeXar = rand() % 2 + 1;
	if (LeXar ==1)
	{
		this->m_color = Blue;
	}
	else
	{
		this->m_color = Red;
	}
}

vector<Virus *> FluVirus::DoClone()
{
	std::vector<Virus*> listVirus;
	Virus* fluVirus = new FluVirus(this);

	listVirus.push_back(fluVirus);
	return listVirus;
}
int FluVirus::InitResistance()
{
	if (m_color == 1)
	{
		int LeXer = rand() % 6 + 10;
		this->set_m_resistance(LeXer);
	}
	else
	{
		if (m_color == 2)
		{
			int LeXer = rand() % 11 + 10;
			this->set_m_resistance(LeXer);
		 }
	}
	return m_resistance;
}

void FluVirus::DoDie()
{
	delete this;
}
	


