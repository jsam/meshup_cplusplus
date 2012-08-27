// MD5:uFDPSaEq5m4Rk3oIlFfVvQ==
// Verifikator 3.02
// Program:Rijecnik
// Opis zadatka:
// Autor:Samuel Picek
// Pocetno vrijeme:29.11.2010 01:32:30
// Završno vrijeme:29.11.2010 01:49:45
// IP:fe80::35fb:2e93:1bed:4c25%10 ( 1383 )
// #:#include <iostream>,#include <vector>,#include <string>
// Uspješnih/neuspješnih prevodenja:43/13
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main ()
{
	int n;
	vector<string> rjecnik;
	string rijec;
	char slovo;

	cout << "Koliko rijeci zelite unijeti: ";
	cin >> n;

	for (int i=0; i<n; i++)
	{
		cin >> rijec;

		rjecnik.push_back(rijec);
	}

	cout << "Unesite zeljeno slovo: " << endl;
	cin >> slovo;

	for (int i=0; i<n; i++)
	{
		if (rjecnik[i][0] == slovo)
		{
			cout << rjecnik[i] << endl;
		}
	}

}
