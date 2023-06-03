// this code is to learn the concept of arrow operator in c++
// ref from www.scaler.com
// and Gees for Geeks

#include <bits/stdc++.h>
using namespace std;

struct Person
{
    char name[20];
    int age;
};

int main()
{
    // pointer object of the structure is created
    Person* info = NULL;

    cout << info << endl;
    cout << sizeof(info) << endl;

    // dynamically allocating the memory
    info = (Person*) malloc(sizeof(struct Person));
    // now info is a pointer of type Person*

    cout << info << endl;
    cout << sizeof(info) << endl;

    Person* info2;

    cout << info2 << endl;
    // cout << *info2 << endl; we cannot do this because value of struct is not simple to show or assign
    cout << sizeof(info2) << endl;

    string* ptr;
    cout << sizeof(ptr) << endl;

    int* ptr2;
    cout << sizeof(ptr2) << endl;

    // arrow operator is used for value assignment
    // syntax (pointer_name)->(variable_name)
    info->age = 17;
    cout << info->age << endl;

    info2->age = 18;
    cout << info2->age << endl;
}
