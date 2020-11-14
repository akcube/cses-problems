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
	int n;
	cin>>n;
	int ct5 = 0;
	/*
	std::vector<int> v;
	int x = 5;
	for(int i=1; i<=13; i++){
		v.push_back(x);
		x*=5;
	}
	*/
	for(int i = 5; i<=n; i+=5){
		int ncpy = i;
		for(; ncpy>0;){
			if(ncpy%5==0){
				ct5++;
				ncpy/=5;
			}
			else
				break;
		}
	}

	/*
	20 5 2 2 | 4
	*/

	cout<<ct5;
	
}