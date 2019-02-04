#include<iostream>
#include<stdlib.h>

using namespace std;

class Float{
		public:
		float a;
		Float(float num){
			this->a = num;
		}
		float operator+(Float &num){
			return this->a+num.a;
		}
		float operator-(Float &num){
			return this->a-num.a;
		}
		float operator*(Float &num){
			return this->a*num.a;
		}
		float operator/(Float &num){
			return this->a/num.a;
		}
		float operator++(int num){
			return this->a+1;
		}
		float operator--(int num){
			return this->a-1;
		}
		float operator=(float num){
			return this->a = num;
		}

};
int main(int argc, char** argv){
	
	Float f1(45.25);
	Float f2(10.54);
	
	if(argc == 3){
		f1 = atoi(argv[1]);
		f2 = atoi(argv[2]);	
	}
	
	cout<<"Addition : "<<f1+f2<<endl;
	cout<<"Substraction : "<<f1-f2<<endl;
	cout<<"Multiplication : "<<f1*f2<<endl;
	cout<<"Division : "<<f1/f2<<endl;
	cout<<"++ : "<<f1++<<endl;
	cout<<"-- : "<<f1--<<endl;
	
	return 0;
}
