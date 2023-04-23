#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter any decimal number"<<endl;
	cin>>n;
	int ans=0, power=1;
	int rem;
	while(n!=0)
	{
		rem=n%2;
		ans=ans+(rem*power);
		power*=10;
		n=n/2;
		
	}
	cout<<ans<<endl;
	return 0;
}
