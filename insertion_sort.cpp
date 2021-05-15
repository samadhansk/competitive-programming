// program for sortint the array element by using insertion sort

#include<iostream>
using namespace std;
void insertion(int a[],int n)
{
	int i,j,key;
	for(i=0;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;

		}
		a[j+1]=key;
	}
}

void display(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"  ";
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

	int num=0;
	cin>>num;
	int a[num];
	for(int i=0;i<num;i++)
	{
		cin>>a[i];
	}
	int n=sizeof(a) /sizeof(a[0]);
	insertion(a,n);
	display(a,n);
	return 0;
}