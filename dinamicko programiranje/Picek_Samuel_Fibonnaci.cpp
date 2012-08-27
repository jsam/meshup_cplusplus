// MD5:cjs/sZHyU3W053l9ix9ROw==
// Verifikator 3.12
// Program:Fibonnaci
// Opis zadatka:Fibonnaciev niz.
// Autor:Samuel Picek
// Pocetno vrijeme:18.11.2010 0:12:46
// Završno vrijeme:18.11.2010 2:13:03
// IP:fe80::35fb:2e93:1bed:4c25%10 ( 1383 )
// #:#include <iostream>,
// Uspješnih/neuspješnih prevodenja: 233/79
#include <iostream>

using namespace std;

int fib( int n )
{
	int stanje[100] = { 0 };
	stanje[0] = 0; 
	stanje[1] = 1;

	for( int i = 2; i < n; ++i )
		stanje[i] = stanje[i-1] + stanje[i-2];

	return stanje[n-1];
}

int stanje_memo[100] = { 0 };
int fib_memo( int n )
{
	if( n == 0 ) return stanje_memo[0] = 0;
	if( n == 1 ) return stanje_memo[1] = 1;

	if( stanje_memo[n] != 0 ) 
		return stanje_memo[n];
	else
	{
		stanje_memo[n] = fib_memo( n - 1 ) + fib_memo( n - 2 );
		return stanje_memo[n];
	}
}

int main()
{
	int N;
	cin >> N;

	cout << fib( N ) << endl;
	cout << fib_memo( N-1 ) << endl;
	system("pause");
	return 0;
}
