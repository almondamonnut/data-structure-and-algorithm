// ternary operator or so-called short-hand if else

#include<bits/stdc++.h>
using namespace std;

string func() {
    return "Hello";
}

int funcint() {
    return 2;
}

int main() {
    // int time = 20;
    // string result = (time < 18) ? "Good day" : "Good evening";
    // cout << result;
    // cout << ((time==20) ? "  yes 20" : "nah");
    int a = 1;
    int b = 2;
    cout << ((a!=b)?(a!=b):'e') << endl;
    // The above line of code is equal to:
    cout << ((a!=b)?:'e') << endl;
    cout << ((a==90)?:0) << endl;
    cout << ((a=90)?:20) << endl;
    cout << a << endl;
    cout << ('e' ?: 0) << endl;
    cout << ("hey" ?: 0) << endl;
    cout << func() << endl;
    string aa = func();
    string aaa = "uuu";
    cout << aa << endl;

    // strings are not the same type
    // only direct string is of short-name type
    // strings that are from function or from variable are long-name type
    cout << typeid(aa).name() << endl 
         << typeid("hey").name() << endl 
         << typeid(aaa).name() << endl
         << typeid(2).name() << endl;

    // cout << (aaa ?: 0) << endl; only string that can be sent to ? is direct string
    
    cout << (2?:0) << endl;
    cout << (funcint() ?: 0) << endl;
}