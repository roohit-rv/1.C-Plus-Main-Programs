#include<iostream>
using namespace std;
class parent{
	public:
		int x;
		protected:
			int y;
			protected:
				int z;
};
class child1: public parent{
	
};
class child2: protected parent{
	
};
class child3: private parent{
	
};
int main()
{
	parent p;
	p.x;
	return 0;
}
