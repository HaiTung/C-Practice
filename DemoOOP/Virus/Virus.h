#pragma once
#include<vector>
class Virus
{
public:
	Virus(Virus *virus);
	void loadADNInformation();
	int reducResistance(int);

	virtual void DoBorn() = 0;
	virtual void DoDie() = 0;
	virtual Virus *DoClone() = 0;

protected : 
	int m_resistance;
	char *m_dna;

	Virus();
	virtual~Virus();
};

