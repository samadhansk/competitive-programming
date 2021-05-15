// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) 
    {
        // code here
        // code here
        sort(arr,arr+n);
        int min1,max1;
        int diff=(arr[n-1]-arr[0]);
        for (int i=1 ; i<=n-1; i++)
        {
            if (arr[i] >= k)
            {
                max1= max(arr[i-1] + k, arr[n-1] - k );
                min1 = min(arr[0] + k, arr[i] - k );
                //cout << max_elem << " "<< min_elem<< endl;
                diff = min(diff, max1 - min1);
            }
            else continue;
        }
        return diff;
    
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


    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends


/*

correct code also

for (int i = 0; i < N - 1; ++i) 
{
        int a = A[i], b = A[i+1];
        int high = max(A[N-1] - K, a + K);
        int low = min(A[0] + K, b - K);
        ans = min(ans, high - low);
    }
    return ans;
}


*/


/*
input to the program

1
2
4
1 5 8 10

*/