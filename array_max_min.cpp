// program for find the max and min number in the array
#include<iostream>
using namespace std;
int main()
{
	int num,arr[10];
	cout<<"ENTER HOW MANY ELEMENT YOU WANT TO ENTER IN THE ARRAY ";
	cin>>num;

	for(int i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	cout<<"ELEMENT OF THE ARRAY ARE :";
	for(int i=0;i<num;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";

	int max=arr[0];
	for(int i=0;i<num;i++)
	{	
		
		if(max< arr[i])
		{
			max=arr[i];
			
		}
	}
	cout<<"THE LARGEST ELEMENT IS :"<<max<<endl;
	int min=arr[0];
	for(int i=0;i<num;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	cout<<"THE SMALLEST ELEMENT IN ARRAY :"<<min<<endl;
}