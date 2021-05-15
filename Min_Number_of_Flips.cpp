/*


Given a binary string, that is it contains only 0s and 1s. We need to make this string a sequence of alternate characters by flipping some of the bits, our goal is to minimize the number of bits to be flipped.

Example 1:

Input:
S = "001"
Output: 1
Explanation: We can flip the 0th bit to 1
to have "101".
â€‹Example 2:

Input: 
S = "0001010111"
Output: 2
Explanation: We can flip the 1st and 8th bit
to have "0101010101".

Your Task:
You don't need to read input or print anything. Your task is to complete the function minFlips() which takes the string S as input and returns the minimum number of flips required.


Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(1).


Constraints:
1<=|S|<=105

*/

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
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
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal
// } Driver Code Ends


int minFlips (string S)
{
    int flip0=0,flip1=0,c1=0,c2=1;
    
    //converting to string starting with 0
    for(int i=0;i<S.length();i++)
    {
        if(c1!=S[i]-'0')
        {
            flip0++;
        }
        
        c1=1-c1;
    }
    
    //converting to string starting with 1
    for(int i=0;i<S.length();i++)
    {
        if(c2!=S[i]-'0')
        {

            flip1++;
        }
        c2=1-c2;
    }
    
    return flip0>flip1?flip1:flip0; //returnig minimum
}