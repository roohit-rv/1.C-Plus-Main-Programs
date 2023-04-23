#include<iostream>
using namespace std;
int main()
{
	int n, t, reverse=0;
	cout<<"enter any number"<<endl;
	cin>>n;
	while(n!=0)
	{
		t=n%10;
		reverse=reverse*10+t;
		n=n/10;
	}
	cout<<reverse<<endl;
	return 0;
	
 } 
