#pragma once
#include<vector>
class Virus
{
protected: char *m_dna;
		 int m_resistance;
public:
	Virus();
	~Virus();
	void LoadADNInformation();
	Virus(Virus *virus);
	int ReduceResistance(int medicince_resistance);
	/*{
		int m_res;
		m_res = this->m_resistance - medicince_resistance;
		if (m_res <= 0)
			return -1;
		return 1;
	}*/
	virtual void DoBorn()=0;
	virtual std::vector<Virus*> DoClone() =0;
	virtual void DoDie() =0;
	virtual int InitResistance() =0;


	void set_m_dna(char *);
	char * get_m_dna();
	void set_m_resistance(int);
	int get_m_resistance();
	
};

