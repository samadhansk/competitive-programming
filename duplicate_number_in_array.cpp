

// program for find the duplicate number in the array

#include<iostream>
using namespace std;
void find_duplicate(int arr[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				cout<<arr[i]<<"  ";
			}
		}
	}
}

int main()
{
	#ifndef ONLINE_JUDGE
	//GETTING INPUT
	freopen("input.txt","r",stdin);
	//WRITING OUPUT
	freopen("output.txt","w",stdout);
	#endif

	int num;
	cin>>num;
	int arr[num];
	for(int i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	int n=sizeof(arr) / sizeof(arr[0]);
	find_duplicate(arr,n);
	return 0;
}

/*
input to the program

7
 12 23 43 12 34 21 23


*/