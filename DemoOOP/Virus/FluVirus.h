#pragma once
#include"Virus.h"
#include <vector>

class FluVirus : public Virus
{
private: int m_color;
public:
	void DoBorn() {
		this->LoadADNInformation();
		this->m_color = rand() % 100;
	}
	Virus * DoClone() {

	}
	void DoDie() {

	}
	void InitResistance(int m_resistance) {

	}
};

