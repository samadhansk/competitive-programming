/*

 maximum difference present between two elements such that
 larger element comes after smaller element inn the array

using brute force method

*/
#include<iostream>
using namespace std;

void pairsum(int arr[],int n)
{
	int max_diff=-10000;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			 int val=arr[j] - arr[i];
			if(val > max_diff)
			{
				max_diff=val;


			}
		}

	}
	cout<<max_diff;
	

}

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

		int num;
		cin>>num;
		int arr[num];
		for(int i=0;i<num;i++)
		{
			cin>>arr[i];
		}
		int n=sizeof(arr) / sizeof(arr[0]);
		pairsum(arr,n);
		return 0;

	}
}