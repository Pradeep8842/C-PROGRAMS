// program to find that the number is power of 2
#include<iostream>
using namespace std;

int main()
{

	int n[]={4,9,15,16,20,22,25,32,45,64,72,80,100,128,256};
	int i;

	for(i=0;i<15;i++)
	{
		cout<< n[i] << " is power of 2 : ";
		// use of bitwise AND (&) operator
		if((n[i]& (n[i]-1))==0)
			cout<<"True"<<endl;
		else
			cout<<"False"<<endl;
	}

	return 0;
}
