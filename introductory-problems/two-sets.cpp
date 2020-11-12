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
	ll n;
	cin>>n;

	ll sum = (n*(n+1LL))/2LL;

	vi s1;
	vi s2;
	s1.reserve(10e6);
	s2.reserve(10e6);

	if(sum&1){
		cout<<"NO";
		return 0;
	}
	else{
		ll sum2 = sum/2LL;
		while(sum){
			if(sum2-n >= 0){
				sum2 -= n;
				sum -= n;
				s1.push_back(n);
			}
			else{
				sum -= n;
				s2.push_back(n);
			}
			n--;
		}
	}

	cout<<"YES"<<endl;
	cout<<s1.size()<<endl;
	for(auto x:s1){
		cout<<x<<" ";
	}
	cout<<endl<<s2.size()<<endl;
	for(auto x:s2){
		cout<<x<<" ";
	}
}