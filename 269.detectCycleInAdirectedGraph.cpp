#include<unordered_map>
#include<list>

bool checkCycleDFS(int node, unordered_map<int, bool>& visited,
unordered_map<int, bool>& dfsvisited, unordered_map<int, list<int> >& adj){
  visited[node] = true;
  dfsvisited[node] = true;

  for(auto neighbour: adj[node]){
    if(!visited[neighbour]){
      bool cycleDetected = checkCycleDFS(neighbour, visited, dfsvisited, adj);
      if(cycleDetected){
        return true;
      }
    }
    else if (dfsvisited[neighbour]){
      //visited true
      return true;
    }
  }

  dfsvisited[node] = false;
  return false;
}

int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  // create adjacency list
  unordered_map<int, list<int> > adj;
  for(int i=0; i<edges.size(); i++){
    int u = edges[i].first;
    int v = edges[i].second;

    adj[u].push_back(v);
  }

  //call dfs for all components
  unordered_map<int, bool> visited;
  unordered_map<int, bool> dfsvisited;
  for(int i=1; i<=n; i++){
    if(!visited[i]){
      bool cycleFound = checkCycleDFS(i, visited, dfsvisited, adj);
      if(cycleFound){
        return true;
      }
    }
  }

  return false;
}