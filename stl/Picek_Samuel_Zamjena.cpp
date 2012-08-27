// MD5:uFDPSaEq5m4Rk3oIlFfVvQ==
// Verifikator 3.02
// Program:Zamjena
// Opis zadatka:
// Autor:Samuel Picek
// Pocetno vrijeme:29.11.2010 02:29:40
// Završno vrijeme:29.11.2010 02:58:35
// IP:fe80::35fb:2e93:1bed:4c25%10 ( 1383 )
// #:#include <iostream>,#include <vector>,#include <string>
// Uspješnih/neuspješnih prevodenja:27/10
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main ()
{
	int najmanji, najveci;
	int pozicijaNajmanjeg, pozicijaNajveceg;
	int n, broj, temp;
	vector<int> brojevi;

	cout << "Koliko brojeva zelite unijeti: ";
	cin >> n;

	for (int i=0; i<n; i++)
	{
		cin >> broj;

		brojevi.push_back(broj);
	}

	najmanji = brojevi[0];
	pozicijaNajmanjeg = 0;

	najveci = brojevi[0];
	pozicijaNajveceg = 0;
	
	for (int i=0; i<n; i++)
	{
		
		if (brojevi[i] < najmanji)
		{
			najmanji = brojevi[i];
			pozicijaNajmanjeg = i;
		}

		
		if (brojevi[i] > najveci)
		{
			najveci = brojevi[i];
			pozicijaNajveceg = i;
		}
	}

	
	temp = brojevi[pozicijaNajmanjeg];
	brojevi[pozicijaNajmanjeg] = brojevi[pozicijaNajveceg];
	brojevi[pozicijaNajveceg] = temp;

	for (int i=0; i<n; i++)
	{
		cout << brojevi[i] << " ";
	}

	cout << endl;
}
