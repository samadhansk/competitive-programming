#include<iostream>
using namespace std;
int main()
{
	int num;
	long fact=1;
	cout<<"Enter the number :";
	cin>>num;
	
	if(num < 0)
	{
		cout<<"we can not calculate the factorial of number ";

	}
	for(int i=1;i<=num;i++)
	{
		fact=fact*i;
	}

	cout<<"factorial of number is "<<fact;
	cout<<"\n";
	return 0;
}