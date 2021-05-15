

//conver a sentance into its equivalent mobile number keypad sequence

#include<bits/stdc++.h>
using namespace std;

string printsequence(string arr[],string input)
{

	string output=" ";
	int n=input.length();
	for(int i=0;i<n;i++)
	{
		if(input[i]==' ')
		{
			output=output+"0";
		}
		else
		{
			int position=input[i]-'A';
			output=output+arr[position];
		}
	}
	return output;

}

int main()
{

	#ifndef ONLINE_JUDGE
	//GETTING INPUT
	freopen("input.txt","r",stdin);
	//WRITING OUPUT
	freopen("output.txt","w",stdout);
	#endif

	string str[]={"2","22","222",
				  "3","33","333",
				  "4","44","444",
				  "5","55","555",
				  "6","66","666",
				  "7","77","777","7777",
				  "8","88","888",
				  "9","99","999","9999"};
	string input="SAMADHAN";
	cout<<printsequence(str,input);
	return 0;
}