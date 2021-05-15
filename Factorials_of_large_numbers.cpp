
/*
Given an integer N, find its factorial.

Example 1:

Input: N = 5
Output: 120
Explanation : 5! = 1*2*3*4*5 = 120

Example 2:

Input: N = 10
Output: 3628800
Explanation :
10! = 1*2*3*4*5*6*7*8*9*10 = 3628800

Your Task:
You don't need to read input or print anything. Complete the function factorial() that takes integer N as input parameter and returns a list of integers denoting the digits that make up the factorial of N.

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(1)


*/


// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:
   void multiply(vector<int> &v,int x)
   {
       int carry=0;
       int mul;
       for(int i=0;i<v.size();i++)
       {
           mul=v[i]*x;
           v[i]=mul%10;
           carry=mul/10;
           
       }
       while(carry)
       {
           v.push_back(carry%10);
            carry=carry/10;
            
       }
   }
    vector<int> factorial(int N){
        // code here
        vector<int > v;
        v.push_back(1);
        for(int i=0;i<=N;i++)
        {
            multiply(v,i);
            
        }
        reverse(v.begin(),v.end());
        int i=0;
        while(v[i]==0)
        {
            i++;
        }
        for(int j=i;j<v.size(),j++)
        return v[j];
        
    }
    
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends