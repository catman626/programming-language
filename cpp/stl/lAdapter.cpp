#include<iostream>
using namespace std;


#include <vector>

#include <algorithm>


template<class T>
void showVector(vector<T> v, string prompt = ""){
    if (prompt != "")   cout << prompt;
    for(T& t: v) cout << t << " ";
    cout << endl;
}

template<class InputIterator, class OutputIterator, class Cmp>
OutputIterator filter(InputIterator stIn, InputIterator edIn, OutputIterator stOut, Cmp pred){
    for (InputIterator it = stIn; it != edIn; it++){
        if (pred(*it)) {
            *stOut++ = *it;
        }
    }

    return stOut;
}

void testAdapters(){
    vector<int> v{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    vector<int> filtered(v.size());

    filter(v.begin(), v.end(), filtered.begin(), bind2nd(less<int>(), 5));


    showVector(filtered);


}

void demoInserter(){
    vector<int> v{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    vector<int> inserted;

    // althogether 3 types of inserterz
    // inserter receives 2 objects
    // 1: the container
    // 2: the iterator
    filter(v.begin(), v.end(), back_inserter(inserted), bind2nd(less<int>(), 5));

    showVector(inserted, "after being inserted: ");
}


void demoBinarySearch(){
    vector<int> v{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << (binary_search(v.begin(), v.end(), 5) ? "found" : "not found") << endl;

    reverse(v.begin(), v.end());
    
    cout << (binary_search(v.begin(), v.end(), 3) ? "found" : "not found") << endl;

    // the fourth parameter is a predicate
    // elements should be sorted via this predicate
    cout << (binary_search(v.begin(), v.end(), 3, greater<int>()) ? "found" : "not found") << endl;


}

int main(){

    demoBinarySearch();

    return 0;
}