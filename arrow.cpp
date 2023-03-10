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

    // dynamically allocating the memory
    info = (Person*) malloc(sizeof(struct Person));
    // now info is a pointer of type Person*

    // arrow operator is used for value assignment
    // syntax (pointer_name)->(variable_name)
    info->age = 17;
}
