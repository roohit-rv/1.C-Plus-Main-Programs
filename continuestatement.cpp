#include<iostream>
using namespace std;
int main()
{
	int i=1, n=50;
	for(i=1;i<=50;i++)
	{
		if(i%3==0)
		{
			continue;
		}
		cout<<i<<endl;
	}
	return 0;
}
