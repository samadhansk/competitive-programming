// find the intersection of two sorted array
#include<iostream>
using namespace std;
void intersection(int arr1[],int arr2[],int m,int n)
{
	int i=0,j=0;
	while(i<m && j<n)
	{
		if(arr1[i]< arr2[j])
		{
			i++;
		}
		else if(arr2[j] < arr1[i])
		{
			j++;
		}
		else
		{
			cout<<arr2[j]<< "   ";
			i++;
			j++;
		}

	}
}
int main()
{
	int arr1[] = {2,4,6,8,9};
	int arr2[]={1,4,5,6,7};
	int m=sizeof(arr1)/sizeof(arr1[0]);
	cout<<"fist array   :";
	for(int i=0;i<m;i++)
	{
		cout<<arr1[i]<<"  ";
	}
	int n=sizeof(arr2) /sizeof(arr2[0]);
	cout<<"\nSecond array  :";
	for(int j=0;j<n;j++)
	{
		cout<<arr2[j]<<"  ";
	}
	cout<<"\nThe output of intersection operation  :";
	intersection(arr1,arr2,m,n);
	cout<<"\n\n";
	return 0;
}