#include <unordered_map>
#include <list>
#include <set>
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    // creating adjacency list
    unordered_map<int, list<pair<int, int> > > adj;
    //imp vertices ni edges tak loop chlana hai
    for(int i=0; i<edges; i++){
        //1st edge
        int u = vec[i][0];
        //2nd edge
        int v = vec[i][1];
        //weight btw them
        int w = vec[i][2];

        //since the graph is undirected
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }

    //creation of dist array with infinite value initially
    vector<int> dist(vertices);
    for(int i=0; i<vertices; i++){
        dist[i] = INT_MAX;
    }

    //creation of set on basis(dist, node)
    set<pair<int, int> > s;
    
    //initialise dist and set with source node
    dist[source] = 0;
    s.insert(make_pair(0, source));

    //actual logic like BFS
    while(!s.empty()){
        //fetch top record
        auto top = *(s.begin());
        int nodeDist = top.first;
        int topNode = top.second;

        //remove top record
        s.erase(s.begin());

        //traverse on neighbours
        for(auto neighbour: adj[topNode]){
            if(nodeDist + neighbour.second < dist[neighbour.first]){
                auto record = s.find(make_pair(dist[neighbour.first], neighbour.first));

                //if record found, then erase it
                if(record != s.end()){
                    s.erase(record);
                }

                //distance update
                dist[neighbour.first] = nodeDist + neighbour.second;

                //record push in set
                s.insert(make_pair(dist[neighbour.first], neighbour.first));
            }
        }
    }
    return dist;
}
