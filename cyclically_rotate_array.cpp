

//Write a program to cyclically rotate an array by one.
#include<iostream>
using namespace std;
void rotate(int arr[],int n)
{
	int num=arr[n-1],i;
	for(i=n-1;  i>0;  i--)
	{
		arr[i]=arr[i-1];

	}
	
	arr[0]=num;

}
int main()
{
	#ifndef ONLINE_JUDGE
	//GETTING INPUT
	freopen("input.txt","r",stdin);
	//WRITING OUPUT
	freopen("output.txt","w",stdout);
	#endif
	int arr[]={1,2,3,4,5,6,7,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"\nArray Befor the cyclically rotation \n:";
	for(int i;i<n;i++)
	{
		cout<<arr[i]<<"  ";
	}
	rotate(arr,n);
	cout<<"\nArray After the cyclically rotation\n :";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"  ";
	}
	cout<<"\n\n";
	return 0;
}