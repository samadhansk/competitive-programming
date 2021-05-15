// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) 
	{
	        long long int x,y,z,mx=arr[0],mn=arr[0],res=arr[0];
	        for(int i=1;i<n;i++)
	        {
	            x=arr[i];
	            y=mx*x;
	            z=mn*x;
	            mx=max(x,max(y,z));
	            mn=min(x,min(y,z));
	            res=max(res,max(mx,mn));
	        }
	        return res;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends

/*
input

5
6 -3 -10 0 2

output
180

6
2 3 4 5 -1 0
output:
120
*/