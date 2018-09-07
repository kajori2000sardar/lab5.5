//include library
#include<iostream>

using namespace std;

//creating main
int main()
{
	//declaring variable
	int n;

	//ask for the no. of rows anf columns
	cout<<"Enter the number of rows and coulumns :";

	//take input
	cin>>n;

	//creating loop for no. of rows
	for(int i=1;i<n+1;i++)
	{
		//creating loop for printing stars in columns
		for(int j=1;j<=i;j++)
		{
			if(i==1||i==n||j==1||j==i)
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<endl;
	}
	//terminating the program
	return 0;
}
