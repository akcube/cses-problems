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

ll sum, total, ans;

void process_subset(vector<int> &v, int k){
	if(k==v.size()){
		ans = ((abs((total-sum)-sum) < ans))?abs((total-sum)-sum):ans;
	}
	else{
		sum += v[k];
		process_subset(v, k+1);
		sum -= v[k];
		process_subset(v, k+1);
	}
}

int main(void){
	usainbolt;
	//file_read
	sum = total = 0;
	int n;
	cin>>n;
	vector<int> x(n);
	loop(n){
		int y;
		cin>>y;
		total += y;
		x[i] = y;
	}
	ans = total;
	process_subset(x, 0);
	cout<<ans;
}