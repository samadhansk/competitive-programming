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
	
	int n;
	cin>>n;
	int no_of_zero=0,q;

	while(n!=0)
	{
		q=n/5;
		no_of_zero=no_of_zero+q;
		n=n/5;

	}
	cout<<no_of_zero<<endl;
	return 0;
}