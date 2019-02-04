#include<iostream>

using namespace std;
/*
* @class Number(void|int|Number)
*
*/
class Number{

    public:
    int n;
    Number(int x){
        cout<<"Create Val\n";
        this->n = x;
    }
    Number(Number &x){
        cout<<"Create Copy\n";
        this->n = x.n;
    }
    Number(){
        cout<<"Create Null\n";
        this->n = 0;
    }
    ~Number(){
        cout<<"Delete -- "<<this->n<<endl;
    }
    Number operator+(Number &ob){
        Number tmp;
        tmp = n + ob.n;
        return tmp;
    }
};

/*
* Main
*
*/

int main(void){
    Number a(10);
    Number b(a);
    Number c(00);
    c = a+b;
    cout<<c.n;
    return 0;
}
