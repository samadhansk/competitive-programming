/*
  Median in a row-wise sorted Matrix

Given a row wise sorted matrix of size RxC where R and C are always odd, find the median of the matrix.

Input:
R = 3, C = 3
M = [[1, 3, 5], 
     [2, 6, 9], 
     [3, 6, 9]]

Output: 5

Explanation:
Sorting matrix elements gives us 
{1,2,3,3,5,6,6,9,9}. Hence, 5 is median. 
 

Example 2:

Input:
R = 3, C = 1
M = [[1], [2], [3]]
Output: 2

Your Task:  
You don't need to read input or print anything. Your task is to complete the function median() which takes the integers R and C along with the 2D matrix as input parameters and returns the median of the matrix.

     { Driver Code Starts
    Initial template for C++
*/
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{   
public:
    int median(vector<vector<int>> &matrix, int r, int c)
    {
        int mid;
        int mn=INT_MAX,mx=INT_MIN;
        for(int i=0;i<r;i++)
        {
            mn=min(mn,matrix[i][0]);
            mx=max(mx,matrix[i][c-1]);
        }
        
        int needed=(r*c+1)/2;
        while(mn<mx)
        {
             mid=mn+(mx-mn) / 2;
            int cnt=0;
            for(int i=0;i<r;i++)
            {
                cnt+=upper_bound(matrix[i].begin(),matrix[i].end(),mid)-matrix[i].begin();
            }
            if(cnt<needed)
            {
                mn=mid+1;    
            }
            else
            {
                mx=mid;
            }
            
        }
        return mid+1;

    }
};

//  Driver Code Starts.

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
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  // } Driver Code Ends

/*

input:

4
3 3

1 3 5
2 6 9
3 6 9

3
3 1
1 2 3

2
7 5
2 2 3 5 16 2 6 8 
9 15 1 2 7 13 19
9 12 12 15 20 4
4 11 12 14 4 6  10
14 18 8 8 12 12 14

1
11 9
2 2 6 11 11 11 14 19 19 2 8 
12 13 14 15 16 17 19 1 2 5 6
12 13 18 20 20 5 5 10 11 12 15
17 17 20 4 5 6 9 9 11 12 17
17 2 4 6 10 12 14 18 18 19 3
3 8 8 11 13 14 15 18 4 7 10
15 16 17 18 19 20 1 1 2 10 11
12 16 17 19 1 1 2 5 9 10 12
16 18 4 6 7 8 13 14 15 15 18


*/