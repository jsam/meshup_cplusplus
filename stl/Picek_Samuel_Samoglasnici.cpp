// MD5:uFDPSaEq5m4Rk3oIlFfVvQ==
// Verifikator 3.02
// Program:Samoglasnici
// Opis zadatka:
// Autor:Samuel Picek
// Pocetno vrijeme:29.11.2010 01:55:40
// Završno vrijeme:29.11.2010 02:26:35
// IP:fe80::35fb:2e93:1bed:4c25%10 ( 1383 )
// #:#include <iostream>,#include <vector>,#include <string>
// Uspješnih/neuspješnih prevodenja:26/10
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main ()
{
	int brojSamoglasnika = 0;
	string rijec;
	vector<string> samoglasnici;
    string znak;
	cout << "Unesite rijec: ";
	cin >> rijec;

	for (int i=0; i<rijec.size(); i++)
	{
		if (rijec[i] == 'a' || rijec[i] == 'e' || rijec[i] == 'i' || rijec[i] == 'o' || rijec[i] == 'u')
		{
            znak = rijec.substr(i, 1);   
			brojSamoglasnika++;
			samoglasnici.push_back(znak);
		}
	}
    
	cout << "Rijec ima " << brojSamoglasnika << " samoglasnika." << endl;	
	for (int i=0; i<brojSamoglasnika; i++)
		{
			cout << samoglasnici[i] << " ";
		}

}
