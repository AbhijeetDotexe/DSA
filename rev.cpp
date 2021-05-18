#include<iostream>
using namespace std;
int rev(int n)
{
	int d=0;
	static int r=0;
	if(n==0)
	{
		return n;

	}
	else 
	{
		d= n%10;
		r=r*10+d;
		rev(n/10);
	}
	return(r);
}
int main()
{
	int num,result;
	cout<<"Enter the number you want to reverse : ";
	cin>>num;
	result=rev(num);
	cout<<"The reverse of the number  "<<num<<" is : "<<result<<endl;
	return 0;
}
