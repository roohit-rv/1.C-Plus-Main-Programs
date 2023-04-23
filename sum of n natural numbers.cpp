#include<iostream>
using namespace std;
int main()
{
	int n, i, sum=0;
	cout<<"enter the number of natural numbers"<<endl;
	cin>>n;
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	cout<<"the sum of natural numbers is "<<sum<<endl;
	return 0;
	
}
