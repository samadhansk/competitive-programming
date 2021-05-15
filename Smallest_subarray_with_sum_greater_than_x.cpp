// { Driver Code Starts


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
  public:

    int sb(int arr[], int n, int x)
    {
        int mn=INT_MAX;
        int i=0,sum=0,l=0;
        for(i=0;i<n;i++)
        {
            sum+=arr[i];
            while(sum>x)
            {
                mn=min(mn,i-l+1);
                sum=arr[l];
                l++;
            }
        }
        return sum;
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


	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.sb(a,n,x)<<endl;
	}
	return 0;
}  // } Driver Code Ends