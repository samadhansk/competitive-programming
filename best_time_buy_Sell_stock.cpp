//Best time to buy and Sell stock
 
 #include<iostream>
using namespace std;
class Solution
{
public:
	int maxprofit(vector<int>& v)
	{
		int i,maxi=INT_MAX;
		ans=0;
		for(i=0;i<v.size(),i++)
		{
			maxi=min(maxi,v[i]);
			ans=max(v[i]-maxi,ans);
		}
		return ans;
	}
};
