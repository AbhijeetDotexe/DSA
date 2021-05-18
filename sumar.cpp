#include<iostream>
using namespace std;
int sum(int p[],int n)
{
	int s=0;
	for(int i=0;i<n;i++)
	{
		s=p[i]+s;	
	}
	return s;
}
int main()
{
	int s,n,a[100];
	cout<<"Enter how many elements you want in the array : ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin >>a[i];
	}
	s=sum(a,n);
	cout<<"The sum of all the elements of the array is : "<<s<<endl;
	return 0;
}