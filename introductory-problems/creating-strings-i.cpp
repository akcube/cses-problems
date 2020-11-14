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
	int freq[26] = {0};
	string inp;
	cin>>inp;
	int len = 0;
	int flag = 0;
	for(len=0; inp[len]!=0; len++){
		freq[(inp[len]&0x1F)-1]++;
		if(inp[len]!=inp[len+1] && inp[len+1] != 0)
			flag = 1;
	}

	if(!flag)
	{
		cout<<1<<endl<<inp;
		return 0;
	}

	int pos = 1;
	for(int k=len; k > 0; k--){
		pos *= k;
	}

	for(int i=0; i<26; i++){
		if(freq[i])
			pos/=freq[i];
	}
	cout<<pos<<endl;
	sort(inp.begin(), inp.end());
	do{
		cout<<inp<<endl;
	}
	while(next_permutation(inp.begin(), inp.end()));
}