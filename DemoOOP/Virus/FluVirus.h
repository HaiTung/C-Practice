#pragma once
#include"Virus.h"

class FluVirus
{
private: int m_color;

public:
	FluVirus(FluVirus *fluVirus);

	void DoBorn();
	void DoDie();
	int intResistance();
	FluVirus();
	virtual~FluVirus();
};

