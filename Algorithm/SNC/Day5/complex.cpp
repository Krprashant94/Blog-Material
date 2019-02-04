#include<iostream>
using namespace std;

class Complex{
	public:
	float a, b;
	Complex(float a, float b){
		this->a = a;
		this->b = b;
	}

	Complex operator+(Complex &comp){
		Complex tmp(this->a + comp.a, this->b + comp.b);
		return tmp;
	}
	Complex operator-(Complex &comp){
		Complex tmp(this->a - comp.a, this->b - comp.b);
		return tmp;
	}
	
};

int main(){
	Complex c1(14, 7);
	Complex c2(10, 5);
	
	Complex add = c1+c2;
	Complex sub = c1-c2;
	cout<<add.a<<" + i "<<add.b<<endl;
	cout<<sub.a<<" + i "<<sub.b<<endl;
	
	return 0;
}
