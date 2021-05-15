#include<iostream>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	//GETTING INPUT
	freopen("input.txt","r",stdin);
	//WRITING OUPUT
	freopen("output.txt","w",stdout);
	#endif
	int num1=0,num2=1,temp=0,num=23;
	// cout<<"Enter the number :";
	// cin>>num;
	for(int i=1;i<=num;i++)
	{
		if(i==1)
		{
			cout<<num1<<"  ";
			continue;
		}
		if(i==2)
		{
			cout<<num2<<"  ";
			continue;
		}

		temp=num1+num2;
		cout<<temp<<" \n ";
		
		num1=num2;
		num2=temp;
		
	}

}