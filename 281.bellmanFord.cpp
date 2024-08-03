//there is some error in the code wrong answer

#include <vector>

vector<int> bellmonFord(int n, int m, int src, vector<vector<int>> &edges) {
    vector<int> dist(n+1, 1e9);
    dist[src] = 0;

    //n-1 timer
    for(int i=1; i<n; i++){
        //traverse on edge list
        for(int j=0; j<m; j++){
            int u = edges[j][0];
            int v = edges[j][1];
            int wt = edges[j][2];

            if(dist[u] != 1e9 && (dist[u] + wt < dist[v])){
                dist[v] = dist[u] + wt;
            }
        }
    }

    return dist;

    //check for negative cycle though in question there is no negative cycle but questions me hota h
    // bool flag = 0;    
    // for(int j=0; j<m; j++){
    //         int u = edges[j][0];
    //         int v = edges[j][1];
    //         int wt = edges[j][2];

    //         if(dist[u] != 1e9 && (dist[u] + wt < dist[v])){
    //             flag = 1;
    //         }
    // }

    // if(flag == 0){
    //     return dist;
    // }
    // return dist;

}