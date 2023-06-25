#include<iostream>
using namespace std;
class sum{
	public:
		void add(int x, int y){
			cout<<x+y<<endl;
		}
		void add(int x, int y, int z){
			cout<<x+y<<endl;
		}
		void add(float x, float y){
			cout<<x+y<<endl;
		}
};
int main(){
	sum s;
	s.add(2,3);
	s.add(2,3,5);
	s.add(float (1.2), float (2.4));
	return 0;
}
