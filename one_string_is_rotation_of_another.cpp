// write the program to chech whether is one string is rotation of another

#include<bits/stdc++.h>
using namespace std;
bool rotationofanother(string s1,string s2)
{
	if( s1.length() != s2.length())
	{
		return false;
	}
	string temp =s1+s1;
	return(temp.find(s2) != string::npos);

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
		string s1,s2;
		cin>>s1>>s2;
		if(rotationofanother(s1,s2))
		{
			cout<<"strings  are rotations of each other "<<endl;

		}
		else
		{
			cout<<"String are not rotations of each other "<<endl;
		}
		return 0;

	}
}