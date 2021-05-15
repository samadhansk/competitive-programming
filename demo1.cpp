// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n)
    {
        int max_value=arr[0];
        int curr_value=arr[0];
        for(int i=1;i<n;i++)
        {
            curr_value=max(arr[i],curr_value+arr[i]);
            max_value=max(curr_value,max_value);
        }
        return max_value;
        
        // Your code here
        
    }
};

// { Driver Code Starts.

int main()
{
	#ifndef ONLINE_JUDGE
	//GETTING INPUT
	freopen("input.txt","r",stdin);
	//WRITING OUPUT
	freopen("output.txt","w",stdout);
	#endif
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends


/*
input to the program

1
5
1 2 3 -2 5


*/