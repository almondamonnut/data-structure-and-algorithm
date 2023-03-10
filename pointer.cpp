#include<bits/stdc++.h>
using namespace std;

// to receive an address, create a pointer here
void func(string* ptr) {
    *ptr = "jelly";
}

int main() {
    string food = "Pizza";
    cout << food <<" " << &food << endl;

    string* ptrf = &food;
    func(ptrf); // to pass an adress, you can pass a pointer
    cout << food;

    food = "jam";
    func(&food); // or you can also pass an adress directly
    cout << "  " << food;

    int* ptr1;
    cout << ptr1;
}