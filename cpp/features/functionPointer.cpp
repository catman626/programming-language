#include<iostream>
using namespace std;


int foo(int i){
    return i + 1;
}


int (*pfoo)(int) = foo;


class Foo{

public:
    static int foo(int i){
        return i+1;
    }

    Foo(){
       
    }
};

int (Foo::*pFoofoo)(int) = &Foo::foo;

void main(){

    cout << pFoofoo(10) << endl;

    return 0;
}