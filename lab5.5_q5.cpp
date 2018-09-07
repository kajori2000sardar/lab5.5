//include library
#include<iostream>

using namespace std;

//create main
int main()
{
	//declare variables
	int n;

	//ask for value of no of rows and columns
	cout<<"Enter the value of number of rows and columns : ";

	//take input
	cin>>n;

	//loop for no. of rows
	for(int i=0;i<n;i++)
	{
		//loop for printing spaces before stars
		for(int s=0;s<n-(i+1);s++)
			cout<<" ";

		//loop for printing stars
		for(int j=0;j<n;j++)
		{
			if(i==0||i==n-1||j==0||j==n-1)
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<endl;
	}
	//terminate the program
	return 0;
}
