#include<iostream>
using namespace std;
int main()
{
	int m,n,a[100][100];
	cout<<"Enter the number of rows : ";
	cin>>n;
	cout<<"Enter the number of coulumns : ";
	cin>>m;
	cout<<"Enter the elements in the array "<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	cout <<"The 2d array you entered is : \n\n\n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<" "<<a[i][j]<<" ";
		}
		cout<<endl;
	}
return 0;
}
