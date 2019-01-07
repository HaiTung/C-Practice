#pragma once
#include<vector>
#include "Virus.h"
#include"FluVirus.h"
#include <list>

using namespace std;


class Patient 
{
private:
	int m_resistance;
	list<Virus*> m_virusList;
	int m_state;
public:
	Patient();
	Patient(int m_resistance, list<Virus*> m_virusList, int m_state);
	int InitResistance();
	void DoStart();
	void TakeMedicine();
	void ReduceResistance(int medicine_resistance);
	void DoDie() {
		m_state = 0;
	}
	int GetState() {
		return m_state;
	}
};

