#include <bits/stdc++.h>
using namespace std;

void demoCreate() {
    vector<int> vi(3);
    vi[0] = 10;
    vi[1] = 20;
    vi[2] = 30;
    vi.push_back(40);
    vi[4] = 50; // มีค่าเท่ากันกับการเขียน vi.push_back(50)

    for(int i=0; i<5; ++i) {
        cout << vi[i] << " ";
    }

    // in case of array
    int ai[3];
    ai[0] = 10;
    ai[1] = 20;
    ai[2] = 30;

    // cout << vi[0];
    for(int i=0; i<3; ++i) {
        cout << ai[i] << " ";
    }
}

int main() {
    demoCreate();
    return 0;
}