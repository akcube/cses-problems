#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll, ll> pi;

#define f first
#define s second
#define pb push_back
#define mp make_pair
#define loop(n) for(ll i=0; i<n; i++)
#define rep(i, a, n) for(ll i=a; i<n; i++)
#define file_read freopen("input.txt", "r", stdin); \
				  freopen("output.txt", "w", stdout);
#define tc ll t; cin>>t; while(t--)
#define endl "\n"
#define usainbolt cin.tie(0) -> sync_with_stdio(0)

/*
0
6
28
96
252
550
1056
1848
*/

ll possibilities(ll k){
	k = k*k;
	return (k*(k-1))/2;
}

int main(void){
	usainbolt;
	//file_read
	ll n;
	cin>>n;
	
	ll lim=(n>=6)?6:n;
	
	for(ll i=1; i<=n; i++){
		ll p = possibilities(i);
		ll attacks = 4*2 + 8*3 + (4+4*(i-4))*4 + 4*(i-4)*6 + (i-4)*(i-4)*8;
		cout<<p-(attacks/2)<<endl;
	}

}