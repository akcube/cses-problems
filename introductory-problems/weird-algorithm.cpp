#include<stdio.h>
#include<iostream>

using namespace std;

int main(void){
	long long n;
	cin >> n;
	
	while(n!=1){	
		cout<<n<<" ";
		if(n&1)
			n = 3*n + 1;
		else
			n >>= 1;
	}
	cout<<1;
}
