//strongly connected components

#include<unordered_map>
#include <list>
#include <stack>

void dfs(int node, unordered_map<int, bool>& vis, stack<int> &st,
unordered_map<int, list<int> > &adj){
	vis[node] = true;
	for(auto nbr: adj[node]){
		if(!vis[nbr]){
			dfs(nbr, vis, st, adj);
		}
	}
	//topo logic
	st.push(node);
}

void revDfs(int node, unordered_map<int, bool>& vis, unordered_map<int, list<int> > &adj){
	vis[node] = true;
	for(auto nbr: adj[node]){
		if(!vis[nbr]){
			revDfs(nbr, vis, adj);
		}
	}
}

int stronglyConnectedComponents(int v, vector<vector<int>> &edges)
{
	//adj list - O(N+E)
	unordered_map<int, list<int> > adj;
	for(int i=0; i<edges.size(); i++){
		int u = edges[i][0];
		int v = edges[i][1];
		adj[u].push_back(v);
	}

	//topo sort - dfs call means O(N+E)
	stack<int> st;
	unordered_map<int, bool> vis;
	for(int i=0; i<v; i++){
		if(!vis[i]){
			dfs(i, vis, st, adj);
		}
	}

	//create a transpose graph - O(N+E)
	unordered_map<int, list<int> > transpose;
	for(int i=0; i<v; i++){
		vis[i] = 0;	//as pehle sbke liye update ho gya tha
		for(auto nbr: adj[i]){
			transpose[nbr].push_back(i);
		}
	}

	//dfs call using above ordering - O(N+E)
	int count = 0;
	while(!st.empty()){
		int top = st.top();
		st.pop();
		if(!vis[top]){
			count++;
			revDfs(top, vis, transpose);
		}
	}

	return count;

}