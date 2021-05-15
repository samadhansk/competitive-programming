//program for sort the element using selection sort

#include<iostream>
using namespace std;
void selection(int a[],int n)
{
	int i,j,temp,index;
	for(i=0;i<n;i++)
	{
		index=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j] < a[index])
			{
				temp=a[j];
				a[j]=a[index];
				a[index]=temp;
			}
		}
	}
}
void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"  ";
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


	int arr[10],num=0;
	cin>>num;
	//int num=sizeof(arr) / sizeof(arr[0]);
	for(int i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	// int arr[]={12,32,82,22,42,18,45};
	int n=sizeof(arr) / sizeof(arr[0]);
	selection(arr,n);
	display(arr,n);
	return 0;

}

