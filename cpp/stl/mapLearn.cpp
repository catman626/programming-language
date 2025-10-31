#include<iostream>

using namespace std;
#include<map>


void testMap(){

    map<string, int> mp;

    cout << "the init value for \"hello\" is " << mp["hello"] << endl;
}
int main(){

    testMap();

    return 0;
}