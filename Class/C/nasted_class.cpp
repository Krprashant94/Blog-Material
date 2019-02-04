#include<iostream>
using namespace std;

class A{
	public:
	int x;
	A(int a){
		x = a;
	}
	void show(){
		cout<<x<<endl;
	}
	class B{
		public:
		int y;
		void show();
		B(int b){
			y=b;
		}
	};
};

void A::B::show(){
	A ob(5);
	cout<<ob.x<<endl;
	cout<<y<<endl;
}
int main(){
	A::B p(50);
	p.show();
	return 0;
}
