

//triplet sum of the array that equals to given sum

#include<iostream>
using namespace std;
void triplet(int arr[],int num,int sum)
{
	int i,j=0,k=0;
	for(i=0;i<num-2;i++)
	{
		for(j=i+1;j<num-1;j++)
		{
			for(k=j+1;k<num;k++)
			{
				if(arr[i] + arr[j] + arr[k]==sum)
				{
					cout<<"("<<arr[i]<<" ,"<<arr[j]<<" ,"<<arr[k]<<" )";
				}
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

		int num=0,sum=0;
		cin>>num;
		cin>>sum;
		int arr[num];
		for(int i=0;i<num;i++)
		{
			cin>>arr[i];
		}
		
		triplet(arr,num,sum);
		return 0;
	}
}