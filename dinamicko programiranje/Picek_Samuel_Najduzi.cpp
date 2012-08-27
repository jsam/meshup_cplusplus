// MD5:cjs/sZHyU3W053l9ix9ROw==
// Verifikator 3.12
// Program:Najduzi
// Opis zadatka:Najduzi_zajednicki_podniz
// Autor:Samuel Picek
// Pocetno vrijeme:19.11.2010 9:12:46
// Završno vrijeme:19.11.2010 9:57:03
// IP:fe80::35fb:2e93:1bed:4c25%10 ( 1383 )
// #:#include <iostream>,
// Uspješnih/neuspješnih prevodenja: 75/30
#include <iostream>
#include <string>
using namespace std;

#define MAX 100

string s1, s2;
int stanje[MAX+1][MAX+1] = { 0 };

int nzp_r( int i, int j )	//rekurzija
{
	if( i == 0 || j == 0 ) return 0;

	if( s1[i-1] == s2[j-1] )
		return nzp_r( i-1, j-1 ) + 1;	//ista slova povecavamo podniz
	else
		return max( nzp_r( i-1, j ), nzp_r( i, j-1 ) );	//probaj preskocit u jednom ili drugom podstringu jedno slovo
}

int nzp_b()		//dinamicki bottom up
{
	for( int i = 1; i <= s1.size(); ++i )
		for( int j = 1; j <= s2.size(); ++j )
			if( s1[i-1] == s2[j-1] )
				stanje[i][j] = stanje[i-1][j-1] + 1;
			else
				stanje[i][j] = max( stanje[i-1][j], stanje[i][j-1] );

	return stanje[s1.size()][s2.size()];
}

string rekonstruiraj( int i, int j )
{
	if( i == 0 || j == 0 ) return "";

	if( s1[i-1] == s2[j-1] )
		return rekonstruiraj( i-1, j-1 ) + s1[i-1];
	else
		if( stanje[i-1][j] > stanje[i][j-1] )
			return rekonstruiraj( i-1, j );
		else 
			return rekonstruiraj( i, j-1 );
}

int main()
{
	cin >> s1 >> s2;

	cout << nzp_r( s1.size(), s2.size() ) << endl;
	cout << nzp_b() << endl;

	cout << rekonstruiraj( s1.size(), s2.size() ) << endl;

	//ispis tablice stanja
	for( int i = 0; i <= s1.size(); ++i )
	{
		for( int j = 0; j <= s2.size(); ++j )
			cout << stanje[i][j] << " ";
		cout << endl;
	}
	
	system("pause");
	return 0;
}
