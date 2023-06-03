// scope resoluiton operator is :: in c++

# include <bits/stdc++.h>
using namespace std;

// Declare a global variable 
int x; 

class classA {
    // static = all object of this class use the same value of variable
    static int x;
    public:
        void func();
        void func2(int x) {
            // ___purpose#3___: access a static variable
            // of the same name as local variable
            cout << "static x" << ::x << endl; // but if we also have global of the same name, it's gonna refer to the global one.
            cout << "local x" << x <<endl;
        }
}; // class needs a semicolon to end the declaration

int classA::x = 300;

// ___purpos#2___: accssing a class's function outside the class
// in order to define the function of it
void classA::func() {
    cout << "func() called";
}

int main() {
    // local variable x
    int x = 10;

    // ____purpose#1____: access a global variable 
    // where there is a local varaible of the same name
    cout << "global x:" << ::x << endl;
    cout << "local x:" << x << endl; 

    // declare object of classA
    classA objA;
    objA.func2(100);

}