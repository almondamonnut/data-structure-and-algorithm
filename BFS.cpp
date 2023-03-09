// This is an implementation of Breadth First Search
// Breadth First Search is used to search an entire graph
// based on Geeks for geeks website

// Time complexity is O(V+E) when V=#nodes, E=#edges

#include <bits/stdc++.h>
using namespace std;

class Graph 
{
    // variables of this class
    int V; // number of vertices
    vector<list<int>> adj; // dynamic array that keeps list of adjacent veritces

    // methods of the class
    public:
        Graph(int V);
        void addEdge(int v, int w);
        void BFS(int s); // s is the starting vertex of the search
};

//constructor of the class Graph
Graph::Graph(int V) {
    this->V = V;
    adj.resize(V);
}

void Graph::addEdge(int v, int w) {
    adj[v].push_back(w); 
    // vector of this form for V=3, v=1, w=2: adj = [[],[2],[]]
    // then if we input v=1, w=0: adj = [[],[2,0],[]]
}

void Graph::BFS(int s) {
    // Mark all vertices as not visited
    vector<bool> visited(V, false); //[false, false, false]

    // Create a queue for BFS
    list<int> queue; //[]

    // Mark the current node as visited and enqueue it
    visited[s] = true;
    queue.push_back(s); //O(1)
    
    // Loop to get the first queue out and visit the neighbors
    while(!queue.empty()) {
        // get the first one out of the queue
        s = queue.front(); //O(1)
        cout << s << " ";
        queue.pop_front(); //O(1)

        // get all neighbors of s into the queue and mark visited if they've never been visted
        for (auto adjacent : adj[s]) {
            if (visited[adjacent] == false) {
                visited[adjacent] = true;
                queue.push_back(adjacent);
            }
        }
    }
}

// test the search
int main()
{
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 0);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 0);
    g.addEdge(2, 1);
    g.addEdge(2, 4);
    g.addEdge(3, 1);
    g.addEdge(3, 4);
    g.addEdge(4, 2);
    g.addEdge(4, 3);

    g.BFS(0);
}