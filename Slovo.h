#pragma once

#include <iostream>
#include <string>



using namespace std;


class Slovo
{
private:
	int velkostSlova;
	string obsah;
	
	

public:

	int zistiVelkostPisma() {return obsah.length();};
	string getObsah() { return obsah; };
	int getVelkostSlova() { return velkostSlova; };
	void toString();



	Slovo(string slovo);
	~Slovo();
};

