// this program is to study the foreach loop in c++
// this program is based on W3school website

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int myNum[5]= {10, 20, 30, 40, 50};
    for (int i : myNum) {
        // this is like "for i in list:" in python
        cout << i << "\n";
    }
}