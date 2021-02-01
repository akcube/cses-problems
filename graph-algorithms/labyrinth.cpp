#include<bits/stdc++.h>

using namespace std;

int s_x, s_y, t_x, t_y;

int main(void){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> arr(n, vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            char x;
            cin>>x;
            arr[i][j] = x;
            if(x=='A')
            {
                s_x = j;
                s_y = i;
            }
            else if(x=='B'){
             	t_x = j;
               	t_y = i;
            }
        }
    }

    queue<pair<int, int>> q;
    vector<vector<int>> vis(n, vector<int>(m));
    q.push({s_x, s_y});
    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {-1, 1, 0, 0};
    map<pair<int, int>, pair<int, int>> parent;
    bool found = false;
    vis[s_y][s_x] = true;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        if(arr[y][x]=='B'){
            found = true;
            break;
        }
        for(int i=0; i<4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 0 || ny < 0 || nx >= m || ny >= n || arr[ny][nx] == '#' || vis[ny][nx])
                continue;
            vis[ny][nx] = true;
            q.push({nx, ny});
            parent[{nx, ny}] = {x, y};
        }
    }
    vector<pair<int, int>> path;
    char dir[4] = {'U', 'D', 'L', 'R'};
    if(found){
    	cout<<"YES"<<endl;
    	path.push_back({t_x, t_y});
    	for(auto curr = parent[{t_x, t_y}];curr != make_pair(s_x, s_y); curr = parent[curr]){
    		path.push_back(curr);
    	}
    	cout<<path.size()<<endl;
    	int x = s_x;
    	int y = s_y;
    	for(auto curr = path.rbegin(); curr != path.rend(); curr++){
    		for(int i=0; i<4; i++){
    			int temp_x = x + dx[i];
    			int temp_y = y + dy[i];
    			if(temp_x==(*curr).first && temp_y==(*curr).second){
    				cout<<dir[i];
    				x = temp_x;
    				y = temp_y;
    			}
    		}
    	}
    	cout<<endl;
    }
    else{
        cout<<"NO"<<"\n";
    }

}