// This code is to learn the algorithm: DFS
// It will explore from root
// as fas as possible along each branch 
// before backtracking.

#include <bits/stdc++.h>
using namespace std;

// Graph class represents a directed graph
// using adjacency list representation
class Graph{
    public:
        map<int, bool> visited;
        map<int, vector<int>> adj;

        //function to add and edge to graph
        void addEdge(int v, int w);

        //DFS traversal of the vertices
        //reachable from v
        void DFS(int v);

        // DFS without recursion
        void DFS_loop(int v);
};

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}

void Graph::DFS(int v)
{
    //mark the current node as visited
    visited[v] = true;
    cout << v << " ";

    //Recur for all the adjacent vertices
    for (int i = 0; i<adj[v].size(); i++) {
        // cout << "i = " << i << endl;
        // cout << "adj[" << v << "][" << i << "] = " << adj[v][i] << endl;
        if (!visited[adj[v][i]]) {
            DFS(adj[v][i]);
        }
    }
}

void Graph::DFS_loop(int start) {
    stack<int> st;
    st.push(start);

    while (!st.empty()) {
        int curr = st.top();
        st.pop();
        if(!visited[curr]) {
            visited[curr] = true;
            cout << curr << " ";
            for (int i = adj[curr].size()-1; i >= 0; i--) {
                int neighbor = adj[curr][i];
                if(!visited[neighbor]) {
                    st.push(neighbor);
                }
            }
        }
    }
}

int main() {
    // Create a graph given in the above diagram
    Graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n";
 
    // Function call
    g.DFS(2);
    g.DFS_loop(2);
 
}
