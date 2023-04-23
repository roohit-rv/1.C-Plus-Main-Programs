#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout<<"enter the number"<<endl;
	cin>>a;
	cout<<"enter the power of the number"<<endl;
	cin>>b;
	int num=1;
	for(int i=0;i<b;i++)
	{
		num=num*a;
	}
	cout<<num<<endl;
	return 0;
}
