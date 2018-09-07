//include library
#include<iostream>

using namespace std;

//create main
int main()
{
	//declare variable
	int n;

	//ask for the no. of rows and columns
	cout<<"Enter the number of rows and columns : ";

	//take the number as input
	cin>>n;

	//make a loop for no. of rows
	for(int i=0;i<n;i++)
	{
		//create loop for printing the column stars
		for(int j=0;j<n;j++)
		{
			//set condition for printing the border stars only
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
