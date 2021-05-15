


//find Largest sum contiguous Subarray 

#include<iostream>
using namespace std;
int largest_sum(int arr[],int n)
{
	int max_value=arr[0];
	int curr_max=arr[0];
	for(int i=1;i<n;i++)
	{
		curr_max=max(arr[i],curr_max+arr[i]);
		//cout<<"\ncurr_max  :"<<curr_max;
		max_value=max(max_value,curr_max);          //max_value  is store maximum value always
		//cout<<"\nMAX value  :"<<max_value;
	}
	return max_value;
}

int main()
{
	
	#ifndef ONLINE_JUDGE
	//GETTING INPUT
	freopen("input.txt","r",stdin);
	//WRITING OUPUT
	freopen("output.txt","w",stdout);
	#endif

	int arr[]={12,32,-32,-22,12,-18,45};
	int n=sizeof(arr) / sizeof(arr[0]);
	int sum=largest_sum(arr,n);

	cout<<"\nLargest contiguous sum is  :"<<sum;
	return 0;
}
