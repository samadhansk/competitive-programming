
//Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo

#include<iostream>
using namespace std;
 void sort012(int a[],int arr_size)							//function to sort the array 
 {
 	int low=0;
 	int high=arr_size-1;
 	int mid=0;
 	while(mid<=high)
 	{
 		switch(a[mid])
 		{
 			case 0:											// if the element is 0 the case 0 execute
 					swap(a[low++],a[mid--]);
 					break;

 			case 1:											// if the element is 1 the case 1 execute
 					mid++;
 					break;

 			case 2:											// if the element is 2 the case 2 execute
 					swap(a[mid],a[high--]);
 					break;
 		}
 	}

 }

 void display(int arr[],int arr_size)		// fnction to print the array element
 {
 	for(int i=0;i<arr_size;i++)
 	{
 		cout<<arr[i]<<" ";
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
    
 	//int num1;
 	// cout<<"ENTER HOW MANY ELEMENT IN THE ARRAY : ";
 	// cin>>num1;
 
 	// cout<<"ENTER THE ELEMENT IN THE ARRAY :";
 	// for(int i=0;i<num1;i++)
 	// {
 	// 	cin>>arr[i];
 	// }
 	int arr[]={1,0,2,1,0,2,0,1,0,2};
 	int n=sizeof(arr) /sizeof(arr[0]);
 	 sort012(arr,n);
 	 cout<<"ARRAY AFTER SORTING / SEGREGATION ";
 	 display(arr,n);
 	 return 0;
 }



 // time complexity :O(n)
 // space complexity:O(1)