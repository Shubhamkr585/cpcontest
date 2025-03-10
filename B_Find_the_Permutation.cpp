#include <bits/stdc++.h>
using namespace std;

// Function to perform DFS and topological sorting
void topologicalSortUtil(int v, vector<vector<int> >& adj,
                         vector<bool>& visited,
                         stack<int>& Stack)
{
    // Mark the current node as visited
    visited[v] = true;

    // Recur for all adjacent vertices
    for (int i : adj[v]) {
        if (!visited[i])
            topologicalSortUtil(i, adj, visited, Stack);
    }

    // Push current vertex to stack which stores the result
    Stack.push(v);
}

// Function to perform Topological Sort
void topologicalSort(vector<vector<int> >& adj, int V)
{
    stack<int> Stack; // Stack to store the result
    vector<bool> visited(V+1, false);

    // Call the recursive helper function to store
    // Topological Sort starting from all vertices one by
    // one
    for (int i = 1; i <= V; i++) {
        if (!visited[i])
            topologicalSortUtil(i, adj, visited, Stack);
    }

    // Print contents of stack
    while (!Stack.empty()) {
        cout << Stack.top() << " ";
        Stack.pop();
    }
}

int main()
{

   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    vector<vector<int>>edges(n+1);
    vector<string>s(n+1);
    for(int i=1;i<=n;i++){
        cin>>s[i];
        for(int j=0;j<s[i].length();j++){
            if(s[i][j]=='1'){
                if(i<j+1)
                edges[i].push_back(j+1);
                else
                edges[j+1].push_back(i);

            }
        }
    }

    topologicalSort(edges, n);
    cout<<endl;

    
   }
   return 0;
}