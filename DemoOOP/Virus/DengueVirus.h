#pragma once
#include<vector>
#include "Virus.h"
#include"FluVirus.h"


class DengueVirus : public Virus
{
private:
	char *m_protein;
public:
	void DoBorn() {
		this->LoadADNInformation();
		char *a[] = { "NS3","NS5","E" };
		int v;
		v = rand() % 2;
		strcpy(this->m_protein, a[v]);
	}
	Virus * DoClone() {

	}
	void DoDie() {

	}
	void InitResistance(int m_resistance) {

	}

};

