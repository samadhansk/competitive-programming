// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends

class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
     //   vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    
    int Top,Bottam,Left,Right,dir;
    Top=0;
    Bottam=matrix.size()-1;
    Left=0;
    Right=matrix[0].size()-1;
    dir=0;
    int i;
    vector<int> ans;
    
    while(Top<=Bottam && Left<=Right)
    {
        if(dir==0)
        {
            for(i=Left;i<=Right;i++)
                ans.push_back(matrix[Top][i]);
            Top++;
        }
        else if(dir==1)
        {
            for(i=Top;i<=Bottam;i++)
                ans.push_back(matrix[i][Right]);
            Right--;
        }
        else if(dir==2)
        {
            for(i=Right;i>=Left;i--)
                ans.push_back(matrix[Bottam][i]);
            Bottam--;
        }
        else if(dir==3)
        {
            for(i=Bottam;i>=Top;i--)
                ans.push_back(matrix[i][Left]);
            Left++;
        }
        dir=(dir+1)%4;
    }
    return ans;
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
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends

/*
input

1
8 8
1 2 3 4 5 6 7 8
9 10 11 12 13 14 15 16
17 18 19 20 21 22 23 24
25 26 27 28 29 30 31 32
33 34 35 36 37 38 39 40
41 42 43 44 45 46 47 48
49 50 51 52 53 54 55 56 
57 59 60 61 62 63 64 65

output

1 2 3 4 5 6 7 8 16 24 32 40 48 56 65 64 63 62 61 60 59 57 49 41 33 25 17 9 10 11 12 13 14 15 23 31 39 47 55 54 53 52 51 50 42 34 26 18 19 20 21 22 30 38 46 45 44 43 35 27 28 29 37 36 


*/
