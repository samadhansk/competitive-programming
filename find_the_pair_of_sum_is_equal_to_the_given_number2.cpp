// find the pair of sum is equal to the given number

// second method to solve the example

#include<bits/stdc++.h>
using namespace std;


void pairOfSum(int arr[],int n,int s)
{
	int low=0,high=n-1;
	//int s=0;
	sort(arr,arr+n);
	while(low < high)
	{
		if(arr[low] + arr[high]==s)
		{
			cout<<"("<<arr[low]<<" ,"<<arr[high]<<")";
			break;
		}
		else
		{
			if((arr[low]+arr[high])>s)
				high--;
			else
				low++;
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

