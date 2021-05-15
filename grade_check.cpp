#include<iostream>
using namespace std;
int main()
{
	int mark;
	cout<<"Enter the Student mark ";                 
	cin>>mark;                                           // Accept the number form user at runtimen

	if(mark >= 90 && mark <=100)
	{
		cout<<"A grade";
	}
	else if(mark>=70 && mark<=80)
	{
		cout<<"B grade";
	} 
	else if (mark>=55 && mark<=69)
	{
		cout<<"C grade";

	}
	cout<<"\n";
	return 0;
}