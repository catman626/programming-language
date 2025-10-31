#include <iostream>
using namespace std;

#include<vector>
#include<functional>
#include<algorithm>

template<class T>
void showVector(vector<T> v, string prompt){
    cout << prompt << ": ";
    for(T& t: v) cout << t << " ";
    cout << endl; 
}

void testFunctionObjects(){
    vector<int> v{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    random_shuffle(v.begin(), v.end());

    showVector(v, "after random_shuffle");

    sort(v.begin(), v.end());

    showVector(v, "after sort default");

    sort(v.begin(), v.end(), greater<int>());

    showVector(v, "after sort with greater<int>()");
    
}

int main(){

    testFunctionObjects();

    return 0;
}