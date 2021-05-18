#include<iostream>
using namespace std;
int fib(int n)
{
	int t;
	static int f0=1,f1=1;
	if(n==0)
	{
		cout<<"\n There is nothing to display the series ends here !";

	}
	else
	{
		t=f0+f1;
		f0=f1;
		f1=t;
		cout<<"\n"<<t;
		fib(n-1);
	}
	return 0;
}
int main()
{
	int l,f0=1,f1=1;
	cout<<"Enter the limit of the Fibonacci series : ";
	cin>>l;
	if(l>2)
	{
		cout<<endl<<f0<<endl<<f1;
		fib(l-2);
	}
	else if (l==2)
	{
		cout<<endl<<f0<<endl<<f1;
	}
	else if(l==1)
	{
		cout<<endl<<f1;
	}
	else
		cout<<"series not possible !"<<endl;
	return 0;
}

