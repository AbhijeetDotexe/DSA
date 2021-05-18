#include<iostream>
#include<stdio.h>
using namespace std;
void example();
int main()
{
	int i;
	for(i=0;i<=3;i++)
	{	
	
		cout<<example();

	}

	return 0;
}
void example()
{
	static int x=10;
	x=x+10;
	cout<<x<<endl;

}
