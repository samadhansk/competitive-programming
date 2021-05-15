// program for reverse the element of the array

#include<iostream>
using namespace std;
int main()
{
	int arr[10],n;
	cout<<"\nENTER HOW MANY  ELEMENT IN ARRAY :";
	cin>>n;
	for(int i=0;i<n;i++)				// store the element in the array
	{
		cin>>arr[i];

	}
	cout<<"\nElemey of array are Before reverse "<<endl;
	for(int i=0;i<n;i++)
	{												//Display the array element before reverse	
		cout<<arr[i]<<endl;
	}

	cout<<"\nELEMENT OF THE ARRAY AFTER  REVERSE  :";
	for(int i=n-1;i >=0;i--)
	{
		cout<<arr[i]<<"   ";
	}


	cout<<"\n";
}
