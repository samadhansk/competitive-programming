
// program for accept the input from the user

#include<iostream>
using namespace std;
int main()
{

	#ifndef ONLINE_JUDGE
    //GETTING INPUT
    freopen("input.txt","r",stdin);
    //WRITING OUPUT
    freopen("output.txt","w",stdout);
    #endif

	int age;
	cout<<"Enter the age of Rudra :";
	cin>>age; 		//	accepting  input		

	cout<<"The age of Rudra is :"<<age<<"  year"<<endl; 
	return 0;
}