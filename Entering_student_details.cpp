#include<iostream>
using namespace std;
class employee
{
	private:
		int empno;
		char empname[50];
		int age;
	public:
		void input()
		{
			cout<<"\nEnter name of the employee : ";
			cin>>empname;
			cout<<"Enter age of the employee : ";
			cin>>age;
			cout<<"Enter employee code : ";
			cin>>empno;
		}
		void output()
		{
			cout<<"\nEmployee name is "<<empname;
			cout<<"\nEmployee age is "<<age;
			cout<<"\nEmployee code is "<<empno;
			cout<<"\n";
		}
};
int main()
{
	int n;
	cout<<"\nEnter the number of employees : ";
	cin>>n;
	employee p[n];
	int i;
	cout<<"\nx------------------------Employees List---------------------------x";
	for (i=0;i<n;i++)
	{
		p[i].input();
	}
	for (i=0;i<n;i++)
	{
		p[i].output();
	}
}
