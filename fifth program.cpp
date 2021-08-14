#include <iostream>
using namespace std;

int clearKthBit(int n,int k)
{

	int m=1<<(k-1);

	m=~(m);

	return (n&m);
}


int main()
{
	int num,k;

	cout<<"Enter number: ";
	cin>>num;
	cout<<"Enter k: ";
	cin>>k;

	cout<<"original number before clearing: "<<num<<endl;

	int new_number= clearKthBit(num,k);

	cout<<"new number after clearing: "<<new_number<<endl;

	return 0;
}
