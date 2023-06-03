// This code is to learn the concept of malloc in c++
// malloc is to allocate a block of memory to a pointer

// more about malloc in arrow.cpp file

#include <bits/stdc++.h>
using namespace std;
int main() {

    // allocate memory of int size to an int pointer
    // malloc(...) returns a pointer to the beginning of the block
    // with empty value in the block
    // the original type of malloc(...) is of type void*
    // (int*) here is to cast the type of void* to int*
    // thanks info from cplusplus.com
    int* ptr = (int*) malloc(sizeof(int));

    cout << ptr << endl;
    cout << *ptr << endl;

    // assign the value 5 to the allocated memory
    // *ptr means "the value that ptr points to"
    *ptr = 5;

    cout << ptr << endl;
    cout << *ptr << endl;

}