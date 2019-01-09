#include "Vstup.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>


using namespace std;


Vstup::Vstup()
{

}


Vstup::~Vstup()
{
}

vector<Slovo *> Vstup::precitanieSuboru()
{
	string line;
	ifstream myfile("Text.txt");
	if (myfile.is_open())
	{

		while (!myfile.eof())
		{



			while (getline(myfile, line))
			{
			//	cout << line << '\n';
 ;

				 if (line.length()<=50)
				 {
					 Slovo * pomSlovo = new Slovo(line);
					 mojKontajner.push_back(pomSlovo);
				 }
			

			}


		}
		myfile.close();
	}

	else cout << "Unable to open file";

	return mojKontajner;
}
