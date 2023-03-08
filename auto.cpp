// this program is to study how auto in c++ works
// this program is baesd on Geeks for Geeks website.
// and also study a little bit of booleen value.

#include<bits/stdc++.h>
using namespace std;

int main()
{   
    // auto keyword specifies that the type of the variable is 
    // automatically assigned according to the given value 
    auto x = 4;
    auto f = 3.;
    auto y = 3.37;
    auto s = 'c';
    auto ptr = &x;
    auto ptrs = &s;
    auto b = false;
    cout << typeid(x).name() << endl //i (integer)
         << typeid(f).name() << endl //d (double)
         << typeid(y).name() << endl //d (double)
         << typeid(ptr).name() << endl //Pi (Pointer to integer)
         << typeid(ptrs).name() << endl //Pc (pointer to character)
         << typeid(b).name() << endl //b (booleen)
         << b << endl;

    if (b == 0){
        cout << "zero" << endl;
        cout << (b == 0) << endl;
    }
    if (b == false){
        cout << "false" << endl;
        cout << (b == false) << endl;
    }

    return 0;
}