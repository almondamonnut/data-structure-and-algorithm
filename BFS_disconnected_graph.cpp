// This code implement BFS for disconnected graph
// based on Geeks for Geeks website

#include<bits/stdc++.h>
using namespace std;

vector<int> BFS(int V, vector<int> adj[]) {
    vector<int> bfs_traversal;
    vector<bool> vis(V, false);

    for (int i=0; i<V; ++i) {
        //check visited
        if (vis[i]==false) {
            // If not visied, initialize a new queue for this node i
            queue<int> q;
            // mark visited of this node
            vis[i] = true;
            // add this node to the queue
            q.push(i);
            
            // do until queue is empty
            while (!q.empty()) {
                // take the first member out of the queue
                int g_node = q.front();
                q.pop();

                // add this new node to the BFS
                bfs_traversal.push_back(g_node);

                // for all adjeacent nodes, if not visited, mark visited and push to queue
                for (auto adjacent : adj[g_node]) {
                    if(!vis[adjacent]) {
                        vis[adjacent] = true;
                        q.push(adjacent);
                    }
                }
            }
        }
    }
    return bfs_traversal;
}

void showV(vector<int> v) {
    for (int i=0; i<v.size(); i++) {
        cout << v[i] << endl;
    }
}

int main() {
    vector<int> adj[5];
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(0);
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(0);
    adj[2].push_back(1);
    adj[2].push_back(4);
    adj[3].push_back(1);
    adj[3].push_back(4);
    adj[4].push_back(2);
    adj[4].push_back(3);

    vector<int> bfs_traversal = BFS(5, adj);
    showV(bfs_traversal);
}