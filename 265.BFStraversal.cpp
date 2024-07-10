//ERROR IN THIS CODE

#include<unordered_map>
#include<queue>
#include<vector>

void bfs(vector<vector<int>> &adj, vector<bool>& visited, vector<int>& ans, int node){
    queue<int> q;
    q.push(node);
    visited[node] = true;
    while(!q.empty()){
        int frontNode = q.front();
        q.pop();

        //store frontNode into ans
        ans.push_back(frontNode);

        //traverse all neighbours of frontNode
        for(auto i: adj[frontNode]){
            if(!visited[i]){
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
    vector<int> ans;
    vector<bool> visited(n, false);

    //travel all component of a graph
    for(int i=0; i<n; i++){
        if(!visited[i]){
            bfs(adj, visited, ans, i);
        }
    }

    return ans;
}