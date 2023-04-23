#include<iostream>
using namespace std;
void changevalue(int *p, int *q)
{
	*p=100;
	*q=69;
}
int main()
{
	int a=5, b=6;
	changevalue(&a,&b);
	cout<<a<<endl<<b<<endl;
	return 0;
	
}

