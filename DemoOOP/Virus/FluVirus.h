#pragma once
#include"Virus.h"
#include <vector>

using namespace std;

class FluVirus : public Virus
{
private: int m_color;

public:
	FluVirus();
	virtual ~FluVirus();
	FluVirus(FluVirus *fluVirus);

	std::vector<Virus*> DoClone() override;
	int InitResistance() override;
	void DoBorn() override;
	void DoDie() override;


	void set_m_Color(int);
	int get_m_Color();
};

