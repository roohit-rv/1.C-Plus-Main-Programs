#include<iostream>
using namespace std;
int a=5;
int main()
{
	int a=7;
	cout<<a<<endl;
	cout<<::a<<endl;
	a++;
	cout<<a<<endl;
	::a++;
	cout<<::a<<endl;
	return 0;
	
}
