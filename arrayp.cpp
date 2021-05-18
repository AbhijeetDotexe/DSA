#include<iostream>
using namespace std;
int main()
{
	int a[10],n;
	cout<<"Enter how many values u want in the array : ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"THE ELEMENTS STORED IN THE ARRAY ARE : " <<endl;
	for(int i=0;i<=n;i++)
	{
		cout<<a[i]<<" ";

	}
	return 0;
}