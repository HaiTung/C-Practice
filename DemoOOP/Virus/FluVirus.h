#pragma once
#include"Virus.h"
#include <vector>

class FluVirus
{
public:
	FluVirus(FluVirus *fluVirus);
	void loadADNInformation();
	int reducResistance(int);
	void DoBorn() ; 
	void DoDie();
	int intResistance();
	FluVirus();
	virtual~FluVirus();
private:
	int m_color;
protected:
	int m_resistance;
	char *m_dna;


};

