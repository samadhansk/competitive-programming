/*

Roman Number to Integer

Easy Accuracy: 47.83% Submissions: 9668 Points: 2
Given a string in roman no format (s)  your task is to convert it to an integer . Various symbols and their values are given below.
I 1
V 5
X 10
L 50
C 100
D 500
M 1000

Example 1:

Input:
s = V
Output: 5
Example 2:

Input:
s = III 
Output: 3
Your Task:
Complete the function romanToDecimal() which takes an string as input parameter and returns the equivalent decimal number. 

Expected Time Complexity: O(|S|), |S| = length of string S.
Expected Auxiliary Space: O(1)

Constraints:
1<=roman no range<=3999

*/

// { Driver Code Starts
// Initial template for C++

// Program to convert Roman Numerals to Numbers
#include <bits/stdc++.h>
using namespace std;

// Returns decimal value of roman numaral
int romanToDecimal(string &);

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
        string s;
        cin >> s;
        cout << romanToDecimal(s) << endl;
    }
}// } Driver Code Ends


// User fuunction teemplate for C++

// str given roman number string
// Returns decimal value of roman numaral
int romanToDecimal(string & str)
{
    unordered_map<char,int> m;
    m['I']=1;
    m['V']=5;
    m['X']=10;
    m['L']=50;
    m['C']=100;
    m['D']=500;
    m['M']=1000;
    
    if(str.length()==1)
    {
        return m[str[0]];
    }
    int i,sum=0;
    
    for(i=0;i<(int)str.length()-1;i++)
    {
        if(m[str[i]]<m[str[i+1]])
        {
            sum+=m[str[i+1]]-m[str[i]];
            i++;
        }
        else
        {
            sum+=m[str[i]];
        }
    }
    if(m[str[i]]<=m[str[i-1]])
    sum+=m[str[i]];
    return sum;
    
    // code here
}