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

	int n, m, k;
	cin>>n>>m>>k;
	int arr[n];
	multiset<int> app;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	for(int i=0; i<m; i++){
		int x;
		cin>>x;
		app.insert(x);
	}
	sort(arr, arr+n);
	int ct = 0;
	for(int i=0; i<n; i++){
		auto x = app.lower_bound(arr[i]-k);
		if(x!=app.end() && *x <= arr[i]+k){
			ct++;
			app.erase(x);
		}
	}

	cout<<ct<<endl;
}