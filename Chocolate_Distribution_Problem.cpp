//Chocolate Distribution Problem
/*
	Given an array A[ ] of positive integers of size N,
	where each value represents the number of chocolates
	in a packet. Each packet can have a variable number of 
	chocolates. There are M students, the task is to distribute
	chocolate packets among M students such that :
	1. Each student gets exactly one packet.
	2. The difference between maximum number of chocolates given 
	to a student and minimum number of chocolates given to a student is minimum.

	test cases:

	Input:
	N = 8, M = 5
	A = {3, 4, 1, 9, 56, 7, 9, 12}
	Output: 6
	Explanation: The minimum difference between 
	maximum chocolates and minimum chocolates 
	is 9 - 3 = 6 by choosing following M packets :
	{3, 4, 9, 7, 9}.

	Input:
	N = 7, M = 3
	A = {7, 3, 2, 4, 9, 12, 56}
	Output: 2
	Explanation: The minimum difference between
	maximum chocolates and minimum chocolates
	is 4 - 2 = 2 by choosing following M packets :
	{3, 2, 4}.


	Your Task:
	You don't need to take any input or print anything. Your task is to complete the function findMinDiff() which takes array A[ ], N and M as input parameters and returns the minimum possible difference between maximum number of chocolates given to a student and minimum number of chocolates given to a student.

	Expected Time Complexity: O(N*Log(N))
	Expected Auxiliary Space: O(1)

*/

#include<bits/stdc++.h>
using namespace std;

int  chocolatesdist(int arr[],int n,int m)
{
	if(m==0 && n==0)
	{
		return 0;
	}
	sort(arr,arr+n);

	if(n<m)
	{
		return -1;
	}

	int i=0,mn=INT_MAX;
	int first=0,last=0;

	for(i=0;i+m-1<n;i++)
	{
		int d =arr[i+m-1-arr[i]];
		if(d<mn)
		{
			mn=d;
			first=i;
			last=i+m-1;
		}
	}
	return (arr[last] -  arr[first]);

}


int main()
{

	#ifndef ONLINE_JUDGE
	//GETTING INPUT
	freopen("input.txt","r",stdin);
	//WRITING OUPUT
	freopen("output.txt","w",stdout);
	#endif


	int t=0;
	cin>>t;
	while(t--)
	{

		int num=0,m=0;
		cin>>num;
		int arr[num];
		cin>>m;
		for(int i=0;i<num;i++)
		{
			cin>>arr[i];

		}
		int n= sizeof(arr) / sizeof(arr[0]);
		cout<<chocolatesdist(arr,n,m);
		return 0;
	}
}

