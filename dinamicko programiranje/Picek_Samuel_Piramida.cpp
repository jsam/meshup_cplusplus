// MD5:cjs/sZHyU3W053l9ix9ROw==
// Verifikator 3.12
// Program:Piramida
// Opis zadatka:Piramida
// Autor:Samuel Picek
// Pocetno vrijeme:20.11.2010 2:23:36
// Završno vrijeme:20.11.2010 3:13:33
// IP:fe80::35fb:2e93:1bed:4c25%10 ( 1383 )
// #:#include <iostream>,
// Uspješnih/neuspješnih prevodenja: 90/45

/*
   Treba se spustiti do dna piramide tako da se skupi sto vise novcica.
   Ulaz. U prvom redu se nalazi broj redova piramide, a onda i sama piramida.
   5
   7
   5 6
   1 2 1
   5 1 9 2
   6 4 2 1 7
*/
#include <iostream>
using namespace std;

int N;
int piramida[100][100] = { 0 };
int stanje[100][100] =  { 0 };

int rjesi()
{
	stanje[0][0] = piramida[0][0];
	for( int i = 1; i < N; ++i )
		for( int j = 0; j < i+1; ++j )
		{
			if( j > 0 ) 
				stanje[i][j] = max( stanje[i][j], stanje[i-1][j-1] + piramida[i][j] );
			
			stanje[i][j] = max( stanje[i][j], stanje[i-1][j] + piramida[i][j] );
		}

	for( int i = 0; i < N; ++i )
	{
		for( int j = 0; j < i+1; ++j )
			cout << stanje[i][j] << " ";
		cout << endl;
	}

	int mmax = 0;
	for( int i = 0; i < N; ++i )
		mmax = max( mmax, stanje[N-1][i] );

	return mmax;
}

int main()
{
	cin >> N;
	for( int i = 0; i < N; ++i )
		for( int j = 0; j < i+1; ++j )
			cin >> piramida[i][j];

	cout << rjesi() << endl;

	return 0;
}
