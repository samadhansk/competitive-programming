//program for move negative number to the left side
#include<iostream>
using namespace std;
void demo(int arr[],int n)
{
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<0)
		{
			if(i!=j)
			{
				swap(arr[i],arr[j]);
				j++;
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
	/* code */
	int arr[]={12,43,-86,45,-98,53};
	int n=sizeof(arr) / sizeof(arr[0]);
	demo(arr,n);
	display(arr,n);
	return 0;
}