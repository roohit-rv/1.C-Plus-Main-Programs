#include<iostream>
using namespace std;
int main()
{
	int n, count=0, t;
	cout<<"enter any number"<<endl;
	cin>>n;
	while(n!=0)
	{
		
		count=count+1;
		n=n/10;
	}
	cout<<count<<endl;
	return 0;
	
}
