// MD5:cjs/sZHyU3W053l9ix9ROw==
// Verifikator 3.12
// Program:Cokolada
// Opis zadatka:Podjela Cokolade
// Autor:Samuel Picek
// Pocetno vrijeme:21.11.2010 0:09:36
// Završno vrijeme:21.11.2010 2:19:23
// IP:fe80::35fb:2e93:1bed:4c25%10 ( 1383 )
// #:#include <iostream>,
// Uspješnih/neuspješnih prevodenja: 23/10
/*
Imamo èokoladu MxN dimenzija. Zanima nas u koliko najmanje rezanja èokolade možemo postiæi da svaki odrezani dio je kvadrat.

Npr. Za èokoladu 3x5 može se postiæi u 3 rezanja.

*/
#include <iostream>
using namespace std;

#define MAX 100

int tablica[MAX+1][MAX+1] = { 0 };

int podjela_cokolade( int a, int b )
{
	if( a == b ) return 0;	//Ne treba rezati vise jer je kvadrat
	if( tablica[a][b] != 0 )  //Vec smo izracunali
		return tablica[a][b];

	int rj = INT_MAX;
	for( int i = 1; i < a; ++i )	//Pokusavamo rezati vodoravno
		rj = min( rj, podjela_cokolade( i, b ) + podjela_cokolade( a-i, b ) + 1 );

	for( int i = 1; i < b; ++i )	//Pokusavamo rezati okomito
		rj = min( rj, podjela_cokolade( a, i ) + podjela_cokolade( a, b-i ) + 1 );

	tablica[a][b] = rj;
	return rj;
}

int main()
{
    
	int N, M;
	cin >> N >> M;

	cout << podjela_cokolade( N, M ) << endl;
	system("pause");
	return 0;
}
