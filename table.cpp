#include<iostream>
using namespace std;
int table(int n,int i)
{
	if(i==1)
	{
		return n;

	}
	else
	{
		return(table(n,i-1)+n);
	}
}
int main()
{
	int n;
	cout<<"Enter the number you want to find the table of : ";
	cin>>n;
	for(int i=1;i<=10;i++)
	{
		cout<<n<<" x "<<i<<" = "<<table(n,i)<<endl; 

	}
	return 0;
}