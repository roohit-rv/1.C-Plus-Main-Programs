#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter the value of a"<<endl;
	cin>>a;
	cout<<"enter the value of b"<<endl;
	cin>>b;
	c=a;
	a=b;
	b=c;
	cout<<"swapping the value of a and b"<<endl;
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl;
	return 0;
}
