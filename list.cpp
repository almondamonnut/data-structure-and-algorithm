#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> queue;
    cout << queue.empty()  << " ";
    queue.push_back(10);
    cout << queue.empty() << " ";
    int s = queue.front();
    cout << s << " ";
    queue.pop_front();
    cout << queue.empty();

}
