





// C++ implementation of above approach
#include <bits/stdc++.h>
using namespace std;

#define N 4

// Function to rotate the matrix 90 degree clockwise
void rotate90Clockwise(int arr[N][N])
{
	// printing the matrix on the basis of
	// observations made on indices.
	for (int j = 0; j < N; j++)
	{
		for (int i = N - 1; i >= 0; i--)
			cout << arr[i][j] << " ";
		cout << '\n';
	}
}

// Driver code
int main()
{

	#ifndef ONLINE_JUDGE
	//GETTING INPUT
	freopen("input.txt","r",stdin);
	//WRITING OUPUT
	freopen("output.txt","w",stdout);
	#endif

	int arr[N][N] = { { 1, 2, 3, 4 },
					{ 5, 6, 7, 8 },
					{ 9, 10, 11, 12 },
					{ 13, 14, 15, 16 } };
	rotate90Clockwise(arr);
	return 0;
}

// This code is contributed by yashbeersingh42
/*

1
4  4
1 2 3 4
5 6 7 8 
9 10 11 12
13 14 15 16

output:

13 9 5 1 
14 10 6 2 
15 11 7 3 
16 12 8 4 


*/