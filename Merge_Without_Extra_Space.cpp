// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m)
	{
	    // code here
	    int i=0,j=0;
	    while(i<n && j<m)
	    {
	        if(arr1[i]<arr2[j])
	        {

	            cout<<arr1[i]<<" ";
	            i++;
	        }
	        else if(arr2[j] < arr1[i])
	        {
	            cout<<arr2[j]<<" ";
	            j++;
	        }
	        else
	        {   
	            cout<<arr2[j]<<" ";
	            i++;
	            j++;
	        }
	    }
	    while(i<n)
	    {
	     	cout<<arr1[i]<<" ";
	        i++;
	    }while(j<m)
	    {
	        cout<<arr2[j]<<" ";
	        j++;
	    }
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
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends

/*

input to the program

1
4 5
1 3 5 7
0 2 6 8 9


*/
