#include<iostream>

using namespace std;



class AVirtualClass{
public:
    // virtual class can have data members
    int x;
    virtual void foo() = 0;
    
    // if no difinition given please set to =0
    // so definition or =0
    virtual void bar() = 0;
    // if a function is defined as virtual,
    // then all its children dont need to say it again


    // if definition is given, 
    // then child can just inherit
    virtual void foo2(){}

};

class BInheritA: public AVirtualClass{
    // b must make sure all virtual class has a difinition
    void foo(){}
    
    void bar(){}


};

int main(){

    BInheritA b;


    return 0;
}