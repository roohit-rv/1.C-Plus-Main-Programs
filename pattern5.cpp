#include<iostream>
using namespace std;
int main()
{
	int i, j, k, rows=4;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=rows-i;j++)
		{
			cout<<" ";
			
		}
		for(k=1;k<=(2*i-1);k++)
			{
				cout<<"*";
			}
		cout<<endl;
		
		
	}
	return 0;
}
