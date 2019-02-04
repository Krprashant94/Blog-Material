#include<iostream>
#include<stdlib.h>

using namespace std;

class Float{
		public:
		float a;
		Float(float num){
			this->a = num;
		}
		int operator>(Float &num){
			return this->a > num.a ? 1:0;
		}
		int operator<(Float &num){
			return this->a < num.a ? 1:0;
		}
};
int main(int argc, char** argv){
	
	Float f1(45.25);
	Float f2(10.54);
	
	if(argc == 3){
		f1 = atoi(argv[1]);
		f2 = atoi(argv[2]);	
	}
	int a = f1>f2; 
	cout<<a;
	
	
	return 0;
}
