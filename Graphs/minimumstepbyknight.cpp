// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    public:
    struct cell {
    int x, y;
    int dis;
    cell() {}
    cell(int x, int y, int dis)
        : x(x), y(y), dis(dis)
    {
    }
};
bool isInside(int x,int y,int N) {
    {
    if (x >= 1 && x <= N && y >= 1 && y <= N)
        return true;
    return false;
}
}
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    // Code here
	int dx[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
    int dy[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
    bool visited[N+1][N+1];
    for(int i=0;i<=N;i++) {
        for(int j=0;j<=N;j++)
        visited[i][j]=false;
    }
    queue<cell> q;
    q.push(cell(KnightPos[0],KnightPos[1],0));
    cell t;
    int x,y;
    visited[KnightPos[0]][KnightPos[1]]=true;
    while(!q.empty()) {
        t=q.front();
        q.pop();
        if(t.x==TargetPos[0] && t.y==TargetPos[1]){
            return t.dis;
        }
        for(int i=0;i<8;i++){
            x=t.x+dx[i];
            y=t.y+dy[i];
            if(isInside(x,y,N) && !visited[x][y]) {
                visited[x][y]=true;
                q.push(cell(x,y,t.dis+1));
            }
        }
    }
    
	    
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends