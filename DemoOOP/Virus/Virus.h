#pragma once
#include<vector>
class Virus
{
private: char *m_dna;
		 int m_resistance;
public:
	Virus();
	void LoadADNInformation();
	int ReduceResistance(int medicince_resistance) {
		int m_res;
		m_res = this->m_resistance - medicince_resistance;
		if (m_res <= 0)
			return -1;
		return 1;
	}
	virtual void DoBorn() {};
	virtual Virus * DoClone() {};
	virtual void DoDie() {};
	virtual void InitResistance(int m_resistance) {};

	
};

