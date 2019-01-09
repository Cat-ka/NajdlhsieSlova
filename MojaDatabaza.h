#pragma once
#include "Slovo.h"
#include "Vstup.h"
#include <vector>

using namespace std;

class MojaDatabaza
{
public:

	vector<Slovo *> kontajnerSlov;

	void vypisDatabazu();
	void vypisNajDatabazu();

	void zoradDatabazu();
	int  dajPocetOpakovy(string);

	MojaDatabaza();
	~MojaDatabaza();
};

