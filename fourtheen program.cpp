#include <iostream>
using namespace std;

int main()
{
	cout<< "Enter the number of variables in the equations: ";
	int n;

	cin>>  n;
	char var = 'x';
	int a[n][n],b[n][1];

	for (int i = 0; i< n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin>> a[i][j];
		}
		cin>> b[i][0];
	}

	cout<< "\nLinear Equation in Matrix representation is: \n";
	for (int i = 0; i< n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout<<" "<< a[i][j];
		}
		cout<< "  " <<static_cast<char>(var) << "  =  " << b[i][0]<< "\n";
		var++;
	}

	return 0;
}
