#include<iostream>

using namespace std;


int foo(int a){
    if (a < 0) {
        throw "a < 0";
    }
    cout << a << endl;

    return 0;
}

int main(){

    try{
        foo(1);


        foo(-1);    
    
    } catch(const char* msg){
        cout << "exception caught!" << endl;
        cout << msg << endl;
    }

    return 0;
}