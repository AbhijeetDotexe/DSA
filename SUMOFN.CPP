#include<iostream.h>
#include<conio.h>
int sum(int n)
{
	if(n==0)
	return 0;
	else
	return(n+sum(n-1));
}
void main()
{
		clrscr();
		int i;
		cout<<"Enter a Positive number :  ";
		cin>>i;
		cout<<"The sum of first "<<i<<" Natural number is : "<<sum(i)<<endl;
		getch();
}