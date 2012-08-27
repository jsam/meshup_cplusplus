// MD5:cjs/sZHyU3W053l9ix9ROw==
// Verifikator 3.12
// Program:Knapsack
// Opis zadatka:Knapsack problem
// Autor:Samuel Picek
// Pocetno vrijeme:21.11.2010 3:52:46
// Završno vrijeme:21.11.2010 4:33:03
// IP:fe80::35fb:2e93:1bed:4c25%10 ( 1383 )
// #:#include <iostream>,
// Uspješnih/neuspješnih prevodenja: 35/23

// Primjer klasicnog knapsack algoritma.
#include <iostream>
using namespace std;

#define MAX_VOLUMEN 500
#define MAX_STVARI 100

int V;					//Volumen ruksaka
int N;					//Broj stvari;
int vStvar[MAX_STVARI];	//Volumen pojedine stvari
int cStvar[MAX_STVARI];	//Cijena pojedine stvari

int stanje[MAX_VOLUMEN+1][MAX_STVARI+1];

int ruksak_m( int volumen, int br_stvari )	//memoizacija
{
	int rj = 0;
	for( int i = 0; i < br_stvari; ++i )
		if( volumen >= vStvar[i] )
			if( rj < ruksak_m( volumen - vStvar[i], i ) + cStvar[i] )
				rj = ruksak_m( volumen - vStvar[i], i ) + cStvar[i];

	return stanje[volumen][br_stvari] = rj;
}

int ruksak_b()		//bottom up
{
	for( int i = 0; i <= V; ++i )
		for( int j = 0; j <= N; ++j )
			for( int k = 0; k < j; ++k )
				if( i >= vStvar[k] )
					stanje[i][j] = max( stanje[i][j], stanje[i - vStvar[k]][k] + cStvar[k] );

	return stanje[V][N];
}

int main()
{
	cin >> V >> N;
	for( int i = 0; i < N; ++i )
		cin >> vStvar[i] >> cStvar[i];

	for( int i = 0; i <= V; ++i )
		stanje[i][0] = 0;

	for( int i = 0; i <= N; ++i )
		stanje[0][i] = 0;

	cout << ruksak_m( V, N ) << endl;
	//cout << ruksak_b() << endl;
	
	return 0;
}
