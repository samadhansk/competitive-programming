

//Spirally traversing a matrix
/*
Given a matrix of size R*C. Traverse the matrix in spiral form.

Example 1:

Input:
R = 4, C = 4
matrix[][] = {{1, 2, 3, 4},
           {5, 6, 7, 8},
           {9, 10, 11, 12},
           {13, 14, 15,16}}
Output: 
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
Explanation:


Example 2:

Input:
R = 3, C = 4  
matrix[][] = {{1, 2, 3, 4},
           {5, 6, 7, 8},
           {9, 10, 11, 12}}
Output: 
1 2 3 4 8 12 11 10 9 5 6 7
Explanation:
Applying same technique as shown above, 
output for the 2nd testcase will be 
1 2 3 4 8 12 11 10 9 5 6 7.

Your Task:
You dont need to read input or print anything. Complete the function spirallyTraverse() that takes matrix, R and C as input parameters and returns a list of integers denoting the spiral traversal of matrix. 

Expected Time Complexity: O(R*C)
Expected Auxiliary Space: O(R*C)

Constraints:
1 <= R, C <= 100
0 <= matrixi <= 100

*/

#include<bits/stdc++.h>
using namespace std;
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
		int n=0,m=0,i,j;
		cin>>n>>m;
		int mat[n][m];
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cin>>mat[i][j];
			}
		}
		int k,l;
		k=0;l=0;
		while(k<n && l<m)
		{
			for(i=l;i<m;i++)
			{
				cout<<mat[k][i]<<" ";
				
			}
			k++;
			for(i=k;i<n;i++)
			{
				cout<<mat[i][m-1]<<" ";
				
			}
			m--;
			if(k<n)
			{
				for(i=m-1;i>=1;i--)
				{
					cout<<mat[n-1][i]<<" ";
					
				}
				m--;
			}
			if(l<m)
			{

				for(i=n-1;i>=k;i--)
				{
					cout<<mat[i][l]<<" ";
				}
				l++;
			}
		}
		cout<<endl;
		return 0;
	}
}

/*input

1
4  4
1 2 3 4
5 6 7 8 
9 10 11 12
13 14 15 16

*/