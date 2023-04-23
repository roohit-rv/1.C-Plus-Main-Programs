#include<iostream>
using namespace std;
int main()
{
	int exp1=4, exp2=4, exp3=7, exp4=45;
	cout<<(exp1==exp3)<<endl;//0
	cout<<(exp1!=exp3)<<endl;//1
	cout<<(exp3>exp4)<<endl;//0
	cout<<(exp3<exp4)<<endl;//1
	cout<<(exp1>=exp2)<<endl;//1
	cout<<(exp1<=exp4)<<endl;//1
	return 0;
}
