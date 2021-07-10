bool visited[V];
void dfsRec(vector<int> adj[],int s,bool visted[]) {
    visited[s]=true;
    cout<<s;
    for(int u:adj[s])
    if(visited[u]==false)
    dfsRec(adj,u,visited);
}
void dfs(int V,int s,vector<int> adj[]) {
    bool visited[V+1];
    for(int i=0;i<V;i++) {
        visited[i]=false;

    }
    dfsRec(adj,s,visited);
}