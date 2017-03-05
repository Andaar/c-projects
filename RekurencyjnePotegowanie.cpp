#include <iostream>

using namespace std;




int suma = 0;
int SumaPotegRekurencyjna(int podstawa, int wykladnik)
{
	int zmianaWykladnika = wykladnik;
	if(zmianaWykladnika == 0)
	{
		suma += 1;
	}
	else
	{
		int wynikPotegowania = podstawa;
		for (int i = 1; i < zmianaWykladnika; i++)
		{
			wynikPotegowania *= wynikPotegowania;
		}
		zmianaWykladnika --;
		suma += wynikPotegowania;
		SumaPotegRekurencyjna(podstawa, zmianaWykladnika);
	}
	return suma;
}

int SumaPoteg(int podstawa, int wykladnik)
{
	return SumaPotegRekurencyjna(podstawa, wykladnik);
}
/*
int SumaPoteg(int podstawa, int wykladnik)
{
	int suma = 0;
	int zmianaWykladnika = wykladnik;
	if(zmianaWykladnika == 0)
	{
		suma += 1;
	}
	else
	{
		int wynikPotegowania = podstawa;
		for (int i = 1; i < zmianaWykladnika; i++)
		{
			wynikPotegowania *= wynikPotegowania;
		}
		zmianaWykladnika --;
		suma += wynikPotegowania;
		SumaPoteg(podstawa, zmianaWykladnika);
	}
	if (wykladnik > 0)
	{
		suma++;
	}
	return suma;
}
*/

int main()
{
	int podstawaPotegi = 2;
	int wykladnikPotegi = 2;
	cout << SumaPoteg(podstawaPotegi, wykladnikPotegi) << endl;
	return 0;
}
