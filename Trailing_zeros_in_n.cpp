/*

To find the number of trailing zeros in n!

test cases:
n=6
solution: 1

test cases: =12
solution: 2

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	//GETTING INPUT
	freopen("input.txt","r",stdin);
	//WRITING OUPUT
	freopen("output.txt","w",stdout);
	#endif

	int t;
	cin>> t;
	while(t--)
	{

		int num=0,cunt=0;
		int fact=1;
		cin>>num;
		for(int i=1;i<num;i++)
		{
			fact=fact*i;                   // calculating the factorial 
		}
		cout<<fact<<endl;
		while(fact%10==0)
		{
			cunt++;
			fact=fact/10;
		}

		 cout<<cunt<<endl;




	}
}