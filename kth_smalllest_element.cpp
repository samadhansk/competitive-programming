
// program for find the kth smallest element in array
#include<algorithm>
#include<iostream>
using namespace std;

void smallest(int arr[],int k,int n)
{
	sort(arr,arr + n );
	cout<<arr[k-1];
}
int main()
{

	int arr[]={23,54,12,67,43,22,89,33};
	int n=sizeof(arr) / sizeof(arr[0]);
	int k=3;
	cout<<"\nTHE K-TH SMALLEST ELEMENT IS :";
	smallest(arr,k,n);
	return 0;
}
