// scope resoluiton operator is :: in c++

# include <bits/stdc++.h>
using namespace std;

// Declare a global variable 
int x; 

class classA {
    public:
        void func();
}; // class needs a semicolon to end the declaration

// ___purpos#2: accssing a class's function outside the class
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

}