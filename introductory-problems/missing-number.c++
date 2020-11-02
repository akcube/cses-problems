#include<stdio.h>
#include<iostream>

using namespace std;

int main(void){

	long long int sum = 0, n;

	cin>>n;

	for(int i=1; i<n; i++){
		int temp;
		cin>>temp;
		sum += temp;
	}

	n = ((n*(n+1))/2)-sum;
	cout<<n;
}