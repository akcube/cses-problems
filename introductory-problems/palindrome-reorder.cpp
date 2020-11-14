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
	char inp[1000001];
	scanf("%s%n", inp, &n);
	int sum[26] = {0};
	for(int i=0; i<n; i++){
		int index = (inp[i]&0x1F)-1;
		++sum[index];
	}
	int ct = 0;
	for(int i=0; i<26; i++){
		if((sum[i]&1)==1){
			ct++;
		}
	}
	if((n&1)==1&&ct!=1 || (n&1)==0&&ct>=1){
		printf("NO SOLUTION");
		return 0;
	}

	char x = '\0';

	for(int i=0; i<26; i++){
		for(int j=0; j<sum[i]/2; j++){
			printf("%c", 65+i);
		}
		if((sum[i]&1)){
			x = 65 + i;
		}
	}
	if(x!=0){
		printf("%c", x);
	}
	for(int i=25; i>=0; i--){
		for(int j=0; j<sum[i]/2; j++){
			printf("%c", 65+i);
		}
	}
}