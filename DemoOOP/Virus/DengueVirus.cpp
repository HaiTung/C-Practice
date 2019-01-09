#include "DengueVirus.h"
#include"Virus.h"
#include <vector>
#include <iostream>
#include"FluVirus.h"

using namespace std;


DengueVirus::DengueVirus()
{
	DoBorn();
	InitResistance();
}


DengueVirus::~DengueVirus()
{
}

 DengueVirus::DengueVirus(const DengueVirus * dengueVirus)
{
	 this->m_protein = dengueVirus->m_protein;
}

 void DengueVirus::DoBorn()
 {
	 LoadADNInformation();
	 int tr = rand() % 3 + 1;
	 if (tr == 1)
	 {
		 this->m_protein = "NS3";

	 }
	 else if(tr ==2)
	 {
		 this->m_protein = "NS5";
	 }
	 else
	 {
		 this->m_protein = "E";
	 }
 }
 std::vector<Virus*> DengueVirus::DoClone()
 {
	 std::vector<Virus *> listVirus;
	 Virus * newDengueVirus1 = new DengueVirus(this);
	 Virus * newDengueVirus2 = new DengueVirus(this);

	 listVirus.push_back(newDengueVirus1);
	 listVirus.push_back(newDengueVirus2);

	 return listVirus;
 }

void DengueVirus ::DoDie(){}

int DengueVirus::InitResistance()
{
	if (this->m_protein == "NS3")
	{
		int LeXer = rand() % 10 + 1;
		this->set_m_resistance(LeXer);
	}

	if (this->m_protein == "NS5")
	{
		int LeXer = rand() % 10 + 11;
		this->set_m_resistance(LeXer);
	}

	if (this->m_protein == "E")
	{
		int LeXer = rand() % 10 + 21;
		this->set_m_resistance(LeXer);
	}

	return m_resistance;
}

