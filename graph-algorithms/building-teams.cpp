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


void dfs(int n, vii &arr, vi &vis, int k, int node){
	if(vis[node]!=-1)
		return;
	vis[node] = k;
	for(auto x:arr[node]){
		dfs(n, arr, vis, k, x);
	}
}

int main(void){
	usainbolt;
	//file_read
	int n, m;
	cin>>n>>m;

	vii arr(n);
	for(int i=0; i<m; i++){
		int x, y;
		cin>>x>>y;
		x--, y--;
		arr[x].pb(y);
		arr[y].pb(x);
	}

	vi vis(n, -1);
	int k = 0;

	for(int i=0; i<n; i++){
		if(vis[i]==-1){
			dfs(n, arr, vis, k, i);
			k++;
		}
	}

	if(k==1){
		cout<<"IMPOSSIBLE"<<endl;
	}
	else{
		cout<<k<<endl;
	}
}