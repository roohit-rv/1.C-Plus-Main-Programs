#include<iostream>
using namespace std;
class fruit{
	public:
	string colour;
	string shape;
};
	int main()
	{
		fruit mango;
		mango.colour="yellow";
		mango.shape="round";
		cout<<mango.colour<<" "<<mango.shape<<endl;
		fruit *apple=new fruit();
		apple->colour="red";
		apple->shape="round";
		cout<<apple->colour<<" "<<apple->shape<<endl;
		return 0;
	}
	

