// Iterators are in c++ STL (Standard Template Library)
// Iterators are used to point at the memory addresses
// of STL containers

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> ar = {1, 2, 3, 4, 5};
    
    // Declaring iterator to a vector
    vector<int>::iterator ptr;
    // iterator is inside the class vector is STL
    
    // display vector element s=using begin() and end()
    for (ptr = ar.begin(); ptr < ar.end(); ptr++)
        cout << *ptr << " ";
        // in the case of vector, iterator is use as if it's a normal pointer
}

// more study about iterator in map.cpp
// there I used map<type1,type2>::iterator name_of_iterator