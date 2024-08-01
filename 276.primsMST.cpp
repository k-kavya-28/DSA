#include <unordered_map>
#include <list> 
#include <bits/stdc++.h>
#include <climits>
vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
{
    // creating adjacency list
    unordered_map<int, list<pair<int, int> > > adj;
    for(int i=0; i<g.size(); i++){
        int u = g[i].first.first;
        int v = g[i].first.second;
        int w = g[i].second;

        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }

    //now 3 DS and their initialisation
    vector<int> key(n+1);   //as we are showing a node eg node 1 with index 1 only
    vector<bool> mst(n+1);
    vector<int> parent(n+1);
    for(int i=0; i<n+1; i++){
        key[i] = INT_MAX;
        mst[i] = false;
        parent[i] = -1;
    }

    //let's start the algo
    //marking for the source node
    key[1] = 0;
    parent[1] = -1;

    for(int i=1; i<n; i++){
        int mini = INT_MAX;
        int u;
        //find the min wali node
        for(int k=1; k<=n; k++){
            if(mst[k] == false && key[k] < mini){
                u = k;
                mini = key[k];
            }
        }

        //mark min node as true
        mst[u] = true;

        //check its adjacent nodes
        for(auto it: adj[u]){
            int v = it.first;
            int w = it.second;
            if(mst[v] == false && w<key[v]){
                parent[v] = u;
                key[v] = w;
            }
        }
    }

    //parent array yahan tak ban chuka hai 
    vector<pair<pair<int, int>, int>> result;
    //0 hai nahi and 1 ka parent ni hai so 2 se chlaenge
    for(int i=2; i<=n; i++){
        result.push_back({{parent[i], i}, key[i]});
    }

    return result;
}
