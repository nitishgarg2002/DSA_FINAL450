// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        int dx[] = {-1, 0, 0, 1} ;
int dy[] = {0, -1, 1, 0} ;
int ans = -1, n = grid.size(), m = grid[0].size() ;
queue<pair<int, int>> q ;
for(int i = 0; i < n; ++i){
for(int j = 0; j < m; ++j){
if(grid[i][j] == 2) q.push({i, j}), grid[i][j] = 0 ;
}
}

while(!q.empty()){
int sz = q.size() ;
while(sz--){
int i = q.front().first, j = q.front().second ;
q.pop() ;
for(int k = 0; k < 4; ++k){
int x = i + dx[k], y = j + dy[k] ;
if(x < 0 || y < 0 || x >= n || y >= m || !grid[x][y]) continue ;

grid[x][y] = 0 ;
q.push({x, y}) ;
}
}
++ans ;
}

for(int i = 0; i < n; ++i){
for(int j = 0; j < m; ++j){
if(grid[i][j]) return -1 ;
}
}
return ans ;

    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends