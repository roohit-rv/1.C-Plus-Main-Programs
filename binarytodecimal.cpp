#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter any number in binary form"<<endl;
	cin>>n;
	int power=1;
	int rem, ans=0;
	while(n>0)
	{
		rem=n%10;
		ans=ans+(rem*power);
		power*=2;
		n=n/10;
	}
	cout<<"in decimal form "<<ans<<endl;
	return 0;\
}
