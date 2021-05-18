#include<iostream>
using namespace std;
void del(int a[],int pos ,int n)
{
	int item;
	item =a[pos];
	for(int i =pos;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n=n-1;
	cout<<"New array after deletion is : "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
int main()
{
	int a[100],n,pos;
	cout<<"How many elements you want to insert in the array : "<<endl;
	cin>>n;
	cout<<"Enter elements of the array : "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"On which position you want to delete the element from : "<<endl;
	cin>>pos;
	del(a,pos,n);
	return 0;
}