#include<iostream>
using namespace std;
class fruit{
	public:
	string colour;
	string shape;
	fruit(){
		colour="yellow";
		shape="round";
	}
	fruit(string c, string s){
		colour=c;
		shape=s;
	}
	fruit(fruit &mango){
		colour=mango.colour;
		shape=mango.shape;
	}
};
	int main()
	{
		fruit mango;
		cout<<mango.colour<<" "<<mango.shape<<endl;
		fruit apple("red","round");
		cout<<apple.colour<<" "<<apple.shape<<endl;
		fruit pineapple=mango;
		cout<<pineapple.colour<<" "<<pineapple.shape<<endl;
		return 0;
	}
	

