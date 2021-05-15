// program for move the all negative  element to the one side of the array 
#include<iostream>
using namespace std;
void arenge(int arr[],int n)
{
	int j=0,temp=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<0)
		{
			if(i!=j)
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				
			}
			j++;
			
		}
	}
}
void display(int arr[],int n)												
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
		cout<<"  ";
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
 	// int num,arr[100];
 	// cout<<"ENTER THE ELEMENT IN THE ARRAY";
 	// cin>>num;
 	// for(int i=0;i<num;i++)
 	// {
 	// 	cin>>arr[i];
 	// }
 	int arr[]={12,34,53,-45,23,-32};
 	int n=sizeof(arr)/sizeof(arr[0]);
 	cout<<"\nARRAY ELEMENT ARE :";
 	for(int i=0;i<n;i++)
 	{
 		cout<<arr[i];
 		cout<<"  ";
 	}
 	//cout<<sizeof(arr);
 	cout<<"\nAFTER MOVING ALL NEGATIVE NUMBER TO THE LEFT SIDE OF THE ARRAY :";
 	arenge(arr,n);
 	display(arr,n);
 	cout<<"\n";
 	return 0;

}