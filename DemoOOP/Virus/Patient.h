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
	vector<Virus*> m_virusList;
	int m_state;
public:
	Patient();
	int InitResistance();
	void DoStart() ;
	void TakeMedicine();
	void DoDie();
	int GetState();
	int get_m_resistance();
	vector<Virus *> GetviruList();
};

