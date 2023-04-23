#include<iostream>
using namespace std;
int main()
{
	int i=1,n=5, mul;
	while(true)
	{
		mul=n*i;
		i++;
		if(mul%7==0)
		{
			cout<<mul<<endl;
			break;
		}
		
	}
	return 0;
}
