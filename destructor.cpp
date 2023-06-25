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
	~fruit(){
		cout<<"destructor function is called"<<endl;
	}
};
	int main()
	{
		fruit *mango=new fruit();
		cout<<mango->colour<<" "<<mango->shape<<endl;
		delete mango;
		fruit apple("red","round");
		cout<<apple.colour<<" "<<apple.shape<<endl;
		fruit dragonfruit;
		dragonfruit.colour="red";
		dragonfruit.shape="dont know";
		cout<<dragonfruit.colour<<" "<<dragonfruit.shape<<endl;
		
		return 0;
	}
	

