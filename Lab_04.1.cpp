#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int k, N;
	double P;
	
	cout << "N = "; cin >> N;

	P = 1.0;
	k = 1;
	N != 0;
	k != 0;

	while (k <= N) 
	{
		P *= (pow(k, 2) / pow(N, 2)) * cos(1.*(pow(N, 2) / pow(k, 2)));
		k++;
	}
	cout << P << endl;

	P = 1.0;
	k = 1;
	do 
	{
		P *= (pow(k, 2) / pow(N, 2)) * cos(1.*(pow(N, 2) / pow(k, 2)));
		k++;
	} while (k <= N);

	cout << P << endl;

	P = 1.0;
	for (k = 1; k <= N; k ++)
	{
		P *= (pow(k, 2) / pow(N, 2)) * cos(1.*(pow(N, 2) / pow(k, 2)));
	}
	cout << P << endl;

	P = 1.0;
	for (k = N; k >= 1; k --)
	{
		P *= (pow(k, 2) / pow(N, 2)) * cos(1.*(pow(N, 2) / pow(k, 2)));
	}
	cout << P << endl;

	return 0;
}