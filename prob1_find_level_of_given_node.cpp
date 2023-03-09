// input example
// 5  // number of vertices
// 4 // number of edges
// 0 1 // edge1
// 0 2 // edge2
// 1 3 // edge3
// 2 4 // edge4
// 3 // find the level of node 3

// output example
// 2

// input example2
// 5
// 4
// 0 1
// 0 2
// 1 3
// 2 4
// 5

// output example2
// -1

#include <bits/stdc++.h>
using namespace std;

void showV(vector<int> vec) {
    cout << "showing vector\n";
    for (int i=0; i<vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

// function to specify level of the given node
int level(int V, vector<vector<int>> edges, int x) {
    vector<int> lev;
    lev.resize(V);
    // check whether there is node x in node vector
    if (x >= V) {
        return -1;
    }
    else {
        // start BFS from 0
        queue<int> q;
        q.push(0);

        // 0 is the level 0 
        lev[0] = 0;

        vector<bool> visited(V, false);
        while (!q.empty()) {
            // take first number out of the queue
            int s = q.front();
            q.pop();
            visited[s] = true;  
            
            // check the first number's neighbors
            for (auto adjacent : edges[s]) {
                if (!visited[adjacent]) {
                    visited[adjacent] = true;
                    q.push(adjacent);

                    // assign the level to the adjacent nodes
                    lev[adjacent] = lev[s]+1;   
                }
            }

        }
        showV(lev);
        return lev[x];
    }
}

int main() {
    int V, n_edges, x;
    vector<vector<int>> edges;

    cout << "intput ja" << endl;

    cin >> V;
    edges.resize(V);

    cin >> n_edges;
    
    int a, b;
    for (int i=0; i<n_edges; i++) {
        cin >> a >> b;
        // cout << a << b << endl;
        // cout << typeid(b).name() << endl;
        edges[a].push_back(b);
    }

    cin >> x;

    cout << level(V, edges, x);

}