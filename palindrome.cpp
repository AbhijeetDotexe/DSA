#include<iostream>
using namespace std;
int main()
{
	int a[10],m,n,result=0;
	cout<<"Enter the number you want to check if it is palindrome or not : "<<endl;
	cin>>m;
	n=m;
	int i=0;
	while(n!=0)
	{
		result=result*10;
		a[i]=n%10;
		n=n/10;
		result=result+a[i];
		i++;
	}
	if(result==m)
	{
		cout<<"The Number you entered is a palindrome "<<endl;
	}
	else
	{
		cout<<"The given number is not a palindrome "<<endl;
	}
	return 0;
}