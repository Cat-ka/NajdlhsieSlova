#include "MojaDatabaza.h"
#include <string>
#include <cstring>
#include <iostream>

using namespace std;

void MojaDatabaza::vypisDatabazu()
{
	for (int i = 0; i < kontajnerSlov.size(); i++)
	{

 
		
		Slovo *skuska = this->kontajnerSlov.at(i);
		skuska->toString();

	}

}

void MojaDatabaza::vypisNajDatabazu()
{
	cout << "Najdlhsie Slovaaaaaaaa" << endl;
	for (int i = 0; i < 3; i++)
	{

		Slovo * skuska = this->kontajnerSlov.at(i);
		for (int i = 0; i < this->dajPocetOpakovy(skuska->getObsah()); i++)
		{
			skuska->toString();
		}

		
		

	}


}


int MojaDatabaza::dajPocetOpakovy(string slovo)
{
	int pomocna = 0;
	string hladaneSlovo = slovo;

	for (int i = 0; i < kontajnerSlov.size(); i++)
	{
		string najdeneSlovo = kontajnerSlov.at(i)->getObsah();
		if (!hladaneSlovo.compare(najdeneSlovo))
		{
			pomocna++;
		}

		
	}

	return pomocna;
}


void MojaDatabaza::zoradDatabazu()
{
	
	cout << "------- Dabaza po swape --------" << endl;

	for (int j = 0; j < kontajnerSlov.size(); j++)
		for (int i = 0; i < kontajnerSlov.size() - 1; i++)
		{
			int typ1 = (char)kontajnerSlov.at(i)->getVelkostSlova();
			int typ2 = (char)kontajnerSlov.at(i + 1)->getVelkostSlova();
			//	cout << typ1 << "asdasd" << typ2 << endl;

			if (typ1<typ2)
			{
				iter_swap(kontajnerSlov.at(i + 1), kontajnerSlov.at(i ));
			}
		}

	this->vypisDatabazu();
		
}


MojaDatabaza::MojaDatabaza()
{
	Vstup vstup;
	this->kontajnerSlov= vstup.precitanieSuboru();
	this->vypisDatabazu();
	this->zoradDatabazu();
	this->vypisNajDatabazu();
}


MojaDatabaza::~MojaDatabaza()
{
}
