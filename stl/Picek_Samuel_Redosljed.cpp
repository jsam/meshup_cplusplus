// MD5:uFDPSaEq5m4Rk3oIlFfVvQ==
// Verifikator 3.02
// Program:Redosljed
// Opis zadatka:U program treba ucitati N brojeva.
// Ako je N paran, ucitane brojeve treba ispisati normalnim redosljedom, 
// a ako je neparan, brojeve treba ispisati obrnutim redosljedom.
// Autor:Samuel Picek
// Pocetno vrijeme:29.11.2010 00:45:30
// Završno vrijeme:29.11.2010 01:19:10
// IP:fe80::35fb:2e93:1bed:4c25%10 ( 1383 )
// #:#include <iostream>,#include <vector>,#include <string>
// Uspješnih/neuspješnih prevodenja:47/11
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main ()
{
	int n, broj;
	vector<int> brojevi;

	cout << "Koliko brojeva zelite unijeti: ";
	cin >> n;

	for (int i=0; i<n; i++)
	{
		cin >> broj;

		brojevi.push_back(broj);
	}

	if (n % 2 == 0)
	{
		for (int i=0; i<n; i++)
		{
			cout << brojevi[i] << " ";
		}
	}
	else
	{
		for (int i=n-1; i>=0; i--)
		{
			cout << brojevi[i] << " ";
		}
	}

	cout << endl;
}
