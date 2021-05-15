

// program for to find the Kth max  element

#include<iostream>
using namespace std;
int main()
{
	int num,arr[10];							//declare array arr[] size 10
	cout<<"ENTER THE ELEMENT IN ARRAY :";			
	cin>>num;

	for(int i=0;i<num;i++)
	{											//storing the element in  array by user						
		cin>>arr[i];
	}

	cout<<"ELEMENTOF THE ARRAY ARE :";
	for(int i=0;i<num;i++)
	{												// displaying array element
		cout<<arr[i];
	}

	
}