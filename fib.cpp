#include<iostream>
using namespace std;
int fibn(int n)
{
	if(n==1||n==0)
	{
		return n;
	}
	else
	{
		return (fibn(n-1)+fibn(n-2));
	}
}
int main()
{
	int p,num;
	cout<<"Enter the position of element you want from the fibonacci series : ";
	cin>>p;
	num=fibn(p);
	cout<<"The required Fibonacci number is : "<<num<<endl;
	return 0;
}
