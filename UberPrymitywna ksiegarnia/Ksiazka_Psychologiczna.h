#pragma once

#include <iostream>
#include <vector>
#include <limits>
#include <conio.h>
#include <stdlib.h>
#include <iomanip>
#include <sstream>
#include <fstream>

#include "Ksiazka.h"
#include "funcs.h"

using namespace std;

void ZapiszDoPliku(string, int);
void PobierzKsiazki();


class Ksiazka_Psychologiczna : public Ksiazka
{
	string poruszany_problem;
	string rekomendacje_psychologow;
	string dziedzina;
	
public:
	Ksiazka_Psychologiczna(string ="", string a="", int x=0, int i=0, float c=0.0, string p="", string r="", string dz="");
	~Ksiazka_Psychologiczna();
	
	int IleSztuk()
	{
		return ilosc_sztuk;
	}
	void SztukiUpdate(int x)
	{
		ilosc_sztuk = x;
	}
	
	void Uzupelnij_Dane();
	void Informacje();
	void InformacjePodstawowe();
	void Usun();
	void SzybkieDodawanie(string);
};