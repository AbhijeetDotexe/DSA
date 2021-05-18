#include<iostream>
using namespace std;
int series(int n)
{
	static int m=3;
	int	count=0; 
	if(n==0)
	{
		cout<<"There is nothing to display, The series ends here ! "<<endl;
	}
	else
	{
		for(int i=2;i<=m-1;i++)
		{
			if(m%i!=0)
			{
				count=1;

			}
			else
			{
				count=0;
				break;
			}
		}
		if(count)
		{
			cout<<endl<<m;
			m++;
			series(n-1);
		}
		else
		{
			m++;
			series(m);
		}
	}
	return m;
}
int main()
{
	int l;
	cout<<"Enter the number till u want to limit to  : ";
	cin>>l;
	cout<<endl<<"2";
	cout<<series(l-1);
	return 0;
}