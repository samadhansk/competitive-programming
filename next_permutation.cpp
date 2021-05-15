

// Next permulation 


#include<iostream>
using namespace std;
	int inx=-1;
	int n=a.size();
	for(int i=n-1;i>0;i--)
	{
		if([i]>a[i-1])
		{
			idx=i;
			break;
		}
	}
	if(idx == -1)
	{
		reverse(a.begin(),a.end());
	}
	else
	{
		int prev= idx;
		for(int i=idx+1;i<n;i++)
		{
			if(a[i]>a[idx-1] && a[i]<=a[prev])
			{
				prev=i;
			}
			swap(a[idx-1],a[prev]);
			reverse(a.begin()+idx,a.end());
		}
	}