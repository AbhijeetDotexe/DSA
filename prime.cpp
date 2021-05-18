#include<iostream>
using namespace std;
int prime(int n)
{
	static int d=2,count=1;
	if(d==n)
	{
		return n;
	}
	else
	{
		if(n%d==0)
		{
			count=0;
			d++;
		}
		else
		{
			d++;
			count=1;
			prime(n);
		}
	}
	return count;
}
int main()
{
	int n,f=0;
	cout<<"Enter the number : ";
	cin>>n;
	if(n==2)
	{
		cout<<"The number is prime !";
	}
	else if(n<2)
	{
		cout<<"The smallest prime number is 2 ";	
	}
	else
	{
		f=prime(n);
		if(f)
		{
			cout<<"The number is prime !"<<endl;

		}
		else
		{
			cout<<"It is not a prime number !"<<endl;

		}
	}
	return 0;
}