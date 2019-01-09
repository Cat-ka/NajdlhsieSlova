#include "Slovo.h"

#include <string>

#include <iostream>

using namespace std;



void Slovo::toString()
{
	cout << "Slovo : " << obsah << " ,Pocet prvok : " << velkostSlova << endl;

}

Slovo::Slovo(string slovo )
{
	obsah = slovo;
	velkostSlova = this->zistiVelkostPisma();

}


Slovo::~Slovo()
{


}
