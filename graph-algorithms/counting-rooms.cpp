#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef pair<int, int> pi;

#define f first
#define s second
#define pb push_back
#define mp make_pair
#define loop(n) for(int i=0; i<n; i++)
#define rep(i, a, n) for(int i=a; i<n; i++)
#define file_read freopen("input.txt", "r", stdin); \
				  freopen("output.txt", "w", stdout);
#define tc int t; cin>>t; while(t--)
#define endl "\n"
#define usainbolt cin.tie(0) -> sync_with_stdio(0)

int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

void dfs(int n, int m, vii &arr, int y, int x, vii &vis){
	if(vis[y][x]){
		return;
	}
	vis[y][x] = true;

	for(int i=0; i<4; i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny < 0 || nx < 0 || ny >= n || nx >= m || arr[y][x] == '#') continue;

		dfs(n, m, arr, ny, nx, vis);
	}

}


int main(void){
	usainbolt;
	//file_read

	int n, m;
	cin>>n>>m;
	
	vii arr(n, vi(m));
	vii vis(n, vi(m, 0));
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			char x;
			cin>>x;
			arr[i][j] = x;
			if(x=='#')
				vis[i][j] = 1;
		}
	}
	int ct = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(!vis[i][j]){
				dfs(n, m, arr, i, j, vis);
				ct++;
			}
		}
	}
	cout<<ct<<endl;
	
}