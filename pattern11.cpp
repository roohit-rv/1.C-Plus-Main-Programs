#include<iostream>
using namespace std;
int main()
{
	int i, j, k, l;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=(4-i);j++)
		{
			cout<<" ";
		}
		for(k=1;k<=i;k++)
		{
			cout<<k;
		}
		for(l=1;l<=(i-1);l++)
		{
			cout<<l;
		}
		cout<<endl;
	}
	return 0;
}
