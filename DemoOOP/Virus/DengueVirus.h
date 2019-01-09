#pragma once
#include<vector>
#include "Virus.h"
#include"FluVirus.h"
#include <vector>

using namespace std;

class DengueVirus : public Virus
{
private:
	char *m_protein;


public:
	DengueVirus();
	virtual ~DengueVirus();
	std::vector<Virus*> DoClone() override;
	void DoBorn() override;
	void DoDie() override;
	DengueVirus(const DengueVirus * dengueVirus);
	int InitResistance() override;
	void SetProtein(string protein);
	string GetProtein();

};

