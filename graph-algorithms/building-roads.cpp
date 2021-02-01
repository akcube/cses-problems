#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef vector<vi> vii;

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

void dfs(int node, vii &adj, vi &vis, vi &sections, int color){
	vis[node] = true;
	sections[node] = color;
	for(auto x:adj[node]){
		if(!vis[x]){
			dfs(x, adj, vis, sections, color);
		}
	}
}

int main(void){
	usainbolt;
	//file_read
	int n, m;
	cin>>n>>m;
	vii adj(n);
	
	for(int i=0; i<m; i++){
		int a, b;
		cin>>a>>b;
		a--, b--;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	vi vis(n, 0);
	int ccount = 0;
	vi sections(n, 0);
	for(int i=0; i<n; i++){
		if(!vis[i]){
			dfs(i, adj, vis, sections, ccount);
			ccount++;
		}
	}
	cout<<ccount-1<<endl;
	set<int> colors;
	for(int i=0; i<n-1; i++){
		if(sections[i]!=sections[i+1]){
			if(colors.find(sections[i])==colors.end()||colors.find(sections[i+1])==colors.end()){
				colors.insert(sections[i]);
				colors.insert(sections[i+1]);
				cout<<i+1<<" "<<i+2<<endl;
			}
		}
	}

}