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

	queue<int> q;
	q.push(0);
	vi vis(n, 0);
	vis[0] = 1;
	bool hasReached = false;
	vi parent(n, -1);
	while(!q.empty()){
		int node = q.front();
		q.pop();

		for(auto x:arr[node]){
			if(!vis[x]){
				q.push(x);
				vis[x] = true;
				parent[x] = node;
			}
			if(x==n-1)
				hasReached = true;
		}
		if(hasReached)
			break;
	}
	
	vi path;
	path.pb(n-1);
	for(int x=parent[n-1]; x!=0; x = parent[x]){
		path.pb(x);
		if(x==-1){
			cout<<"IMPOSSIBLE"<<endl;
			return 0;
		}
	}
	path.pb(0);
	int steps = path.size();
	cout<<steps<<endl;
	for(auto it=path.rbegin(); it!=path.rend(); it++){
		cout<<*it+1<<" ";
	}
	
}