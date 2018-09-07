//include library
#include<iostream>

using namespace std;

//create main
int main()
{
	//declare variables
	int n;

	//ask for input
	cout<<"Enter the no. of rows and columns : ";

	//take input
	cin>>n;

	//loop for no. of rows
	for(int i=0;i<n;i++)
	{
		//loop for spaces before stars
		for(int s=0;s<n-(i+1);s++)
			cout<<" ";

		//loop for printing stars in column
		for(int j=0;j<n;j++)
			cout<<"*";
		cout<<endl;
	}
	//terminate the program
	return 0;
}
