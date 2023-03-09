// ternary operator or so-called short-hand if else

#include<bits/stdc++.h>
using namespace std;

int main() {
    int time = 20;
    string result = (time < 18) ? "Good day" : "Good evening";
    cout << result;
    cout << ((time==20) ? "  yes 20" : "nah");
}