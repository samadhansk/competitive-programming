

//Search a 2D Matrix
/*
Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.

Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true

Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false

*/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        for(int i=0;i<(int)matrix.size();i++)
        {
            if(binary_search(matrix[i].begin(),matrix[i].end(),target))
                return -1;
        }
        return 0;
    }
    
};

int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        
        vector<vector<int> > matrix(tar); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }
        int tar;
        cin>>tar;

        Solution ob;
        vector<int> result = ob.searchMatrix(matrix, tar);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends