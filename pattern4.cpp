#include<iostream>
using namespace std;
int main()
{
	int i, j, rows=4;
	for(i=1;i<=4;i++)
	{
		for(j=i;j<=rows;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
