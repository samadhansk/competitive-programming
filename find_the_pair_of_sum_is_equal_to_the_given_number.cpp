// find the pair of sum is equal to the given number

// using brute force solution
#include<iostream>
using namespace std;

void pairOfSum(int arr[],int n,int s)
{
	int i=0,j=0;
	int sum=0;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			sum=arr[i]+arr[j];
			if(sum==s)
			{
				cout<<" ("<<arr[i]<<" ,"<<arr[j]<<")";
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
    int t;
    cin>>t;
    while(t--)
    {

    	int s=0,num=0;
    	cin>>num;
   		cin>>s;
    	int arr[num];
    	for(int i=0;i<num;i++)
    	{
    		cin>>arr[i];

    	}
    	int n=sizeof(arr) /sizeof(arr[0]);
    	pairOfSum(arr,n,s);
    	return 0;

    }
 }





/*
intput 

2

10
10
1 4 45 6 0 9 5 5 8 2
output
 (1 ,9) (4 ,6) (5 ,5) (8 ,2)


10
8
-1 4 3 6 7 9 5 5 8 2


output

 (-1 ,9) (3 ,5) (3 ,5) (6 ,2)

*/