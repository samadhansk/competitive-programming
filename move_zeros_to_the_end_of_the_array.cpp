
// move zeros to the end of the array

// bye using bruteforce aproch


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
	cin>>t;
	while(t--)
	{

		int n;
		cin>>n;
		int arr[n],temp[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}

		for(int i=0;i<n;i++)
		{
			if(arr[i]!=0)
			{
				temp[i]=arr[i];
			}
		}

		for(int i=0;i<n;i++)
		{
			cout<<temp[i];
		}

	}
}