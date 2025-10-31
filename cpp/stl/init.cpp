
#include<iostream>
using namespace std;

#include<vector>


void initVector(){
    // int will be initialized to 0
    vector<int> v(10);
    for(int n: v)
        cout << n << " ";
    cout << endl;
    
    // float will be initialized to 0
    vector<float> vf(10);
    for(auto n: vf)
        cout << n << " ";
    cout << endl;
}
int main(){

    initVector();

    return 0;
}