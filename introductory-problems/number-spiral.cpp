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

	tc{
		ll x, y;
		cin>>x>>y;
		if(x>=y){
			if(x&1){
				x = 1 + (x-1)*(x-1);
				x += y-1;
			}
			else{
				x = x*x;
				x -= y-1;
			}
			cout<<x<<endl;
		}
		else{
			if(y&1){
				y = y*y;
				y -= x-1;
			}
			else{
				y = 1 + (y-1)*(y-1);
				y += x-1;
			}
			cout<<y<<endl;
		}
	}

}