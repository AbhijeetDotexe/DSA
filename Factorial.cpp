#include<iostream>
using namespace std;
int fac(int n)
{
	if(n==0)
	return 1;
	else 
	return n* fac(n-1);
}
int main()
{
	int n;
	cout<<"Enter the number you want to find the factorial of : ";
	cin>>n;
	cout<<"The factorial of "<<n<<" is : "<<fac(n)<<endl;
	return 0;
	
}
