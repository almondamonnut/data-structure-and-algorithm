// 

#include<bits/stdc++.h>
using namespace std;

int main() {

    list<int> queue;
    cout << queue.empty()  << " "; // 1=true

    queue.push_back(10); // added 1 element after its current last element: O(1)
    cout << queue.empty() << " "; // 0=false

    int s = queue.front();
    cout << s << " ";
    queue.pop_front();
    cout << queue.empty();

    //cout << queue[0] will raise an error. We cannot access element of list using any kind of bracket
}
