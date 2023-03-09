// this code is to study struct in c++

// First, let's understand struct
// struct = a group of typ(s) of data

#include <bits/stdc++.h>
using namespace std;

struct {
    int age; // member (int variable)
    string name; // member (string variable)
} person; // structure variable

struct {
    string brand;
    int year;
} car1, car2;

// named structure
struct myCar {
    string model;
    int year;
}; // we still need a semicolon every ending of struct

int main() {
    person.age = 15;
    person.name = "almond";

    cout << person.age << " " << typeid(person.age).name(); 

    car1.year = 1999;
    car2.year = 2012;
    cout << car1.year << " " << car2.year << endl;

    // using named structure
    myCar car3;
    car3.model = "catkung";
    cout << car3.model;
}