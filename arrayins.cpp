#include<iostream>
#include<cstdio>
using namespace std;
void insert(int a[],int n,int pos,int num)
	{
		for(int i=n;i>=pos;i--)
		{
			a[i+1]=a[i];

		}
		a[pos]=num;
		if(pos>n)
		{
			cout<<"Insertion outside the array is not allowed ! ";
		}
		else
		{
			n++;
			cout<<"New array after insertion is : "<<endl;
			for(int i=0;i<n;i++)
			{
			cout<<a[i]<<endl;
			}
		//char s = "elements inserted successfully !";
		}
}
int display(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}
int main()
{
	int n,num,a[100],pos;
	void insert(int a[],int n,int pos,int num);
	
	cout<<"Enter the size of the array : ";
	cin>>n;
	cout<<"Enter the elements in the array : "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the number you want to insert in the array : ";
	cin>>num;
	cout<<"\nEnter the position you want to insert the number into : ";
	cin>>pos;
	--pos;
	insert(a,n,pos,num);
	//cout<<display(a,n);
	return 0;
}
