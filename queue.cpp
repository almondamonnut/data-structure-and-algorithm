// Tis is a study of queue data structure in c++
// based on Geeks for Geeks

#include<bits/stdc++.h>
using namespace std;

void showq(queue<int> gq) 
{
    queue<int> g = gq;
    while (!g.empty()) {
        cout << g.front() << ' ' ;
        g.pop();
    }
    cout << '\n';
}

int main()
{
    queue<int> gquiz;
    gquiz.push(10);
    gquiz.push(20);
    showq(gquiz);
}