// MD5:uFDPSaEq5m4Rk3oIlFfVvQ==
// Verifikator 3.02
// Program:Pozicija
// Opis zadatka:
// Autor:Samuel Picek
// Pocetno vrijeme:29.11.2010 00:01:30
// Završno vrijeme:29.11.2010 00:25:10
// IP:fe80::35fb:2e93:1bed:4c25%10 ( 1383 )
// #:#include <iostream>,#include <vector>,#include <string>
// Uspješnih/neuspješnih prevodenja:20/5
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main ()
{
	int najmanji;
	int pozicijaNajmanjeg;
	int n, broj;
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
	
	for (int i=0; i<n; i++)
	{
		if (brojevi[i] < najmanji)
		{
			najmanji = brojevi[i];
			pozicijaNajmanjeg = i;
		}
	}

	cout << "Najmanji broj se nalazi na pozicij " << pozicijaNajmanjeg + 1 << endl;
}
