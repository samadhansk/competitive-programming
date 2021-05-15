// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution
{
  public:
    int minJumps(int arr[], int n)
    {
        // Your code here
        int maxr=arr[0];
        int step=arr[0];
        int jump=1;
        if(n==1)
        {
            return 0;
        }
        else if(arr[0]==0)
        {
            return -1;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(i==n-1)
                {
                    return jump+1;
                    
                }
                maxr=max(maxr,i+arr[i]);
                step--;
                if(step==0)
                {
                    jump++;
                    if(i>maxr)
                    {
                        return -1;
                    }
                    step=maxr-1;
                }
                
            }
        }
        return jump;
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
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends

