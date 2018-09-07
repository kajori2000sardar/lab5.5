//include library
#include<iostream>

using namespace std;

//create main
int main()
{
	//declare variable
	int n;

	//ask for the value of no. of rows and columns
	cout<<"Enter the value of number of rows and columns : ";

	//take input
	cin>>n;

	//create loop for no. of rows
	for(int i=1;i<n+1;i++)
	{
		//creating loop for printing stars in cloumns
		for(int j=1;j<=i;j++)
			cout<<"*";
		cout<<endl;
	}
	//terminatinng the program
	return 0;
}
