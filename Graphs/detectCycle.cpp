// directed graph

bool dfs(vector<int> adj[],int s,bool visited[],bool recSt[]) {
    visited[s]=true;
    recSt[s]=true;
    for(int u:adj[s]) {
        if(visited[u]==false && dfs(adj,u,visited,recSt)) return true;
        else if(recSt[u]==false) return true;

       
    }
    recSt[s]=false;
      return false;
}

bool isCycle(int V,vector<int> adj[]) {
    bool visited[V+1];
    bool recSt[V+1];
    for(int i=0;i<=V;i++){
        visited[i]=false;
        recSt[i]=false;
    }
    for(int i=0;i<V;i++){
        if(visited[i]==false){
            if(dfs(adj,i,visited,recSt)){
                return true;
            }
            else return false;
        }
    }
}