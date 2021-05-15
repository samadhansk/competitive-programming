

// Unordered map example

#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{

	#ifndef ONLINE_JUDGE
    //GETTING INPUT
    freopen("input.txt","r",stdin);
    //WRITING OUPUT
    freopen("output.txt","w",stdout);
    #endif

	// Declearing Unoedered map

	unordered_map <string ,int > umap;
	umap["One"]=1;
	umap["Two"]=2;
	umap["Three"]=3;
	umap["four"]=4;
	umap["five"]=5;


	for(auto x:umap)
	{
	
		cout<< x.first << "  "<<x.second<<endl;
	}


	umap.insert(make_pair("six",6)); //insert the pair in the unordered map

	string key = "One";
	if(umap.find(key)==umap.end()) 		// find the key pair in the map
	{
		cout<<key<<"Not found"<<endl;

	}

	else
	{
		cout<<"Found   "<<key<<endl;
	}

}