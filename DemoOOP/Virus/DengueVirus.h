#pragma once
#include<vector>
#include "Virus.h"
#include"FluVirus.h"


class DengueVirus
{
	protected :
		char m_protein[4];

private: 
	char NS3[4] = { 'N','S','3',' ' };
	char NS5[4] = {'N','S','5',' '};
	char E[4] = {'E',' ',' ',' '};

public:


	DengueVirus();
	virtual~DengueVirus();

	DengueVirus(DengueVirus * den);
	void BoBorn();
	void DoClone();
	void DoDie();
	int  InitResistance();


};

