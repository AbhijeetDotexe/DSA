#include<iostream>
using namespace std;
int add(int ,int );
int sub(int ,int );
int mul(int ,int);
int divide(int,int);
int power(int ,int);
int main()
{
	int x,y,ch=0;
	cout<<"Enter Number 1 : ";
	cin>>x;
	cout<<"Enter Number 2 : ";
	cin>>y;
	while(ch!=6){
		cout<<"\n\n\n***************Main Menu*************************\n\n"<<endl;
		cout<<"1. ADD TWO NUMBERS "<<endl;
		cout<<"2. SUBTRACT TWO NUMBERS"<<endl;
		cout<<"3. MULTIPLY TWO NUMBERS" <<endl;
		cout<<"4. DIVIDE TWO NUMBERS "<<endl;
		cout<<"5. POWER "<<endl;
		cout<<"6. EXIT"<<endl;
		cout<<"\n Enter your choice : "<<endl;
		cin>>ch;

		switch(ch)
		{
			case 1:
				cout<<"THE SUM OF THE TWO NUMBERS IS : \n"<<add(x,y)<<endl;
				break;
			case 2:
				cout<<"The subtraction of the two numbers is :\n "<<sub(x,y)<<endl;
				break;
			case 3:
				cout<<"The Product of the two number is : \n"<<mul(x,y)<<endl;
				break;
			case 4:
				cout<<"The division of the two numbers is : \n"<<divide(x,y)<<endl;
				break;
			case 5:
				cout<<"THE POWER IS : \n"<<power(x,y)<<endl;
				break;
			case 6:
				break;
				default: cout<<"YOUR CHOICE IS INVALID \n\n"<<endl;
		}	
	};
return 0;
}

int add(int x,int y)
{
	return (x+y);
}
int sub(int x,int y)
{
	return (x-y);
}
int mul(int x,int y)
{
	return (x*y);
}
int divide(int x,int y)
{
	return (x/y);
}
int power(int x,int y)
{
	if(y==0)
	{
		return 1;
	}
	else
	{
		return(x*power(x,y-1));
	}
}
