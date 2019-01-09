#include<iostream>
#include "Patient.h"
#include"FluVirus.h"
#include"Virus.h"
#include"DengueVirus.h"
#include<vector>
#include<time.h>


Patient::Patient()
{
	InitResistance();
	DoStart();
}

int Patient::InitResistance()
{
	int n = rand() % (9000 - 1000 + 1) + 1000;
	this->m_resistance = n;

	return m_resistance;
}

void Patient::DoStart()
{

	this->m_state = 1;
	int rd_numberVirus = rand() % (20 - 10 + 1) + 10;
	int randNum;

	for (int i = 0; i < rd_numberVirus; i++)
	{
		randNum = rand() % 2 +1 ;
		if (randNum ==1)
		{
			FluVirus * fluVirus = new FluVirus();
			this->m_virusList.push_back(fluVirus);
		}
		else if (randNum == 2)
		{
			DengueVirus * dengueVirus = new DengueVirus();
			this->m_virusList.push_back(dengueVirus);
		}
	}
}

void Patient::DoDie()
{
	this->m_state = 0;
	cout << "Patient " << endl;
}

int Patient::GetState()
{
	return m_state;
}

int Patient::get_m_resistance()
{
	return m_resistance;
}

vector<Virus*> Patient::GetviruList()
{
	return m_virusList;
}


void Patient::TakeMedicine()
{
	/*int i = 0;
	for (auto j : this->m_virusList[i]->DoClone())
	{
		this->m_virusList.push_back(j);
		i++;
		}*/

	int medicine_resistance = rand() % 30 + 1;
	int lSize = this->m_virusList.size() -1;
	int conVirus = 0;
	cout << "medicine_resistance: " << medicine_resistance << endl;
	cout << "Virus list size: " << this->m_virusList.size() << endl;

	while (lSize >=0 )
	{
		this->m_virusList[lSize]->ReduceResistance(medicine_resistance);
		if (this->m_virusList[lSize]->get_m_resistance() > 0)
		{
			for (auto virus_clone: this->m_virusList[lSize]->DoClone())
			{
				this->m_virusList.push_back(virus_clone);
			}
		}
		else
		{
			this->m_virusList.erase(this->m_virusList.begin() + lSize);
		}
		lSize--;
	}

	int sumResistanceVirus = 0;
	for each(auto var in m_virusList)
	{
		sumResistanceVirus += var->get_m_resistance();
	}


	if (sumResistanceVirus > this->get_m_resistance())
	{
		cout << "Patient ";
		this->m_state = 0;
	}
}