//count pairs with given sum

// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k)
     {
        int cnt=0,i;
		map<int,int> m;

		for(i=0;i<n;i++)
		{
			m[arr[i]]++;
		}
		for(i=0;i<n;i++)
		{
			cnt+=m[k-arr[i]];

			if(k-arr[i]==arr[i])
				cnt--;
		}
		return cnt/2;
    }
};

// { Driver Code Starts.

int main() {

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
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}  // } Driver Code Ends

/*
test cases

1
4
6
1 5 7 1
 output=2

1
4
2
1 1 1 1

output=6
*/