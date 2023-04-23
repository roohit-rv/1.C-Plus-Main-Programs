#include<iostream>
using namespace std;
int main()
{
	int n, sum=0, t;
	cout<<"enter the number"<<endl;
	cin>>n;
	while(n!=0)
	{
		t=n%10;
		sum=sum+t;
		n=n/10;
	}
	cout<<sum<<endl;
	return 0;

}
