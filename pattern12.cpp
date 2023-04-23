#include<iostream>
using namespace std;
int main()
{
	int i, k, j, rows;
	cout<<"enter the number of rows"<<endl;
	cin>>rows;
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows-i;j++)
		{
			cout<<" ";
			
		}
		if(i==1||i==rows)
		{
			for(j=1;j<=(2*i-1);j++)
			{
				cout<<i;
			}
		}
		else
		{
			cout<<i;
			for(k=1;k<=(2*i-3);k++)
			{
				cout<<" ";
			}
			cout<<i;
		}
		cout<<endl;
		
	}
	return 0;
}
