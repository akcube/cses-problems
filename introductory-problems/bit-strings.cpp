#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
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

#define MM 1000000007


int main(void){
	usainbolt;
	//file_read
	int n;
	cin>>n;

	ll ans = 1;
	for(int i=0; i<n; i++){
		ans = ((ans%MM) * 2)%MM;
	}
	cout<<ans;
}