#include<iostream>
using namespace std;
int main()
{
	int num=0;
	for (;;)
	{
		cout<<"infinite loop"<<"\n";
		num=num+1;
		cout<<num;
	}
}