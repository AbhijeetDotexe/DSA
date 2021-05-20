#include<iostream>
using namespace std;
int main()
{
	struct student
	{	
		int rollno;
		char sex;
		float height;
		float weight;
	};
	struct student data[3]
	{
		{121,'m',5.7,60},{122,'m',6,72},{123,'f',5.4,50}
	};
	cout<<"The initialized contents are : "<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<"\n**Record no "<<i+1<<" **"<<endl;
		cout<<"Roll number = "<<data[i].rollno<<endl;
		cout<<"sex = "<<data[i].sex<<endl;
		cout<<"height = "<<data[i].height<<endl;
		cout<<"weight = "<<data[i].weight<<endl;
	}
	cout<<endl;
	return 0;
}