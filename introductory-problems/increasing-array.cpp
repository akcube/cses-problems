#include<iostream>

using namespace std;

int main(void){
	int n;
	long long int ans = 0;
	cin>>n;
	long long int prev;
	cin>>prev;

	for(int i=1; i<n; i++){
		int temp;
		cin>>temp;
		prev = prev-temp;
		ans += ((prev>0)?prev:0);
		prev = temp + ((prev>0)?prev:0);
	}
	cout<<ans;
}
