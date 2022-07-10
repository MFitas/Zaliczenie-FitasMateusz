#pragma once
#include <iostream>
using namespace std;
class Figura
{
	string nazwa;
	float wysokosc;
	float szerokosc;
	string kolor;
public:
	Figura();
	Figura(string, float, float, string);
	float oblicz_Pole();
	bool operator==(Figura&);
	~Figura() {};
	void pisz_Dane();
	Figura(float, string);
	Figura(float);
	friend ostream& operator<<(ostream& wyj, Figura& a);
	Figura operator =(Figura&);
};

