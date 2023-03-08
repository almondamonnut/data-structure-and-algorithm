// This is an implementation of Breadth First Search
// based on Geeks for geeks website

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
    queue.push_back(s);

}