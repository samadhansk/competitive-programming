//Find the Union and Intersection of the two sorted arrays.


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 void Union( int arr1[],int arr2[],int m,int n)
 {
 	int i=0,j=0;
 	int count=0;
 	while(i<m && j<n)
 	{
 		if (arr1[i] < arr2[j])   // compare 
 		{
 			//cout<<arr1[i]<<" ";
 			i++;
 			count++;
 		}
 		else if(arr2[j]< arr1[i])
 		{
 			//cout<<arr2[j]<<" ";
 			j++;
 			count++;
 		}
 		else
 		{
 			//cout<<arr2[j]<<" ";
 			j++;
 			i++;
 			count++;
 		}
 	}
 	while(i<m)
 	{
 		cout<<arr1[i++]<<"  ";
 		count++;

 	}
 	while(j<n)
 	{
 		cout<<arr2[j++]<<"  ";
 		count++;
 	}
 	cout<<"Number of element in  "<<count;
 }

 int main()
 {

	#ifndef ONLINE_JUDGE
	//GETTING INPUT
	freopen("input.txt","r",stdin);
	//WRITING OUPUT
	freopen("output.txt","w",stdout);
	#endif
 	//int n1,n2;
 	//int arr1[10],arr2[10];

 	int arr1[] ={1 ,1 ,2 ,2 ,3, 3};
 	int arr2[] ={8 ,9, 7, 6, 5};
 	int m=sizeof(arr1)/sizeof(arr1[0]);   //m is the size of the array arr1[]
 	//cout<<m;
 	//cout<<"   ";
 	int n=sizeof(arr2)/sizeof(arr2[0]);		//n is the size of the array arr2[]
	//cout<<n;
 	cout<<"\noutput of Union operation  : ";
 	Union(arr1,arr2,m,n);
 	
 	cout<<"\n\n";
 	return 0;
 }