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




int main(void){
	usainbolt;
	//file_read

	tc {
		ll a, b;
		cin>>a>>b;
		ll max = (a>b)?a:b;
		ll min = (a>b)?b:a;
		if((a+b)%3==0 && min*2 >= max)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	
}