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

void recurse(vii &x, int n){
	if(n==1){
		x.push_back({0});
		x.push_back({1});
		return;
	}
	recurse(x, n-1);
	vii y = x;
	for(auto &ele:x){
		ele.pb(0);
	}
	reverse(y.begin(), y.end());
	for(auto &ele:y){
		ele.pb(1);
	}
	for(auto &ele:y){
		x.pb(ele);
	}
}

int main(void){
	usainbolt;
	//file_read
	
	int n;
	cin>>n;
	vii x;
	recurse(x, n);
	for(auto ele:x){
		reverse(ele.begin(), ele.end());
		for(auto d:ele) cout<<d;
		cout<<endl;
	}
}