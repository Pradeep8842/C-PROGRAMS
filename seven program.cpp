#include <iostream>
using namespace std;

int isolate_rightmost_onebit(int n)
{

	int mask=-n;
	return (n&mask);
}


int main()
{
	int num;

	cout<<"Enter number: ";
	cin>>num;
	cout<<"original number before isolating rightmost 1 bit: "<<num<<endl;

	int new_number= isolate_rightmost_onebit(num);

	cout<<"new number after isolating rightmost 1 bit: "<<new_number<<endl;

	return 0;
}
