//include library
#include<iostream>

using namespace std;

//create main
int main()
{
	//declare variables
	int n;

	//ask for the no. of rows and columns	
	cout<<"Enter the number of rows and columns: ";
	
	//take input
	cin>>n;

	//loop for printing rows
	for(int i=0;i<n;i++)
	{
		//loop for printing columns
		for(int j=0;j<n;j++)
			cout<<"*";
		cout<<endl;
	}

	//terminate the program
	return 0;
}
