// find Duplicate charactors in the string
#include<bits/stdc++.h>
using namespace std;


void Duplicate(string s)
{
	map<char , int> cnt;
	int n=s.length();
	for(int i=0;i < n;i++)
	{
		cnt[s[i]]++;
	}

	for(auto it  : cnt)
	{
		if(it.second > 1)
		{
			cout<<it.first<<",count ="<<it.second<<endl;
		}
	}
}






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
		string s;
		cin>>s;
		Duplicate(s);
		return 0;
	}
}