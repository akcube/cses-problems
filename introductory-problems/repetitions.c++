#include<iostream>
#include<string>

using namespace std;

int main(void){
	string inp;
	cin>>inp;
	char prev_char = inp[0];
	int mlen = 0, len = 0;
	for(int i=0; inp[i]!='\0'; i++, len++){
		if(prev_char!=inp[i]){
			mlen = (len>mlen)?len:mlen;
			len = 0;
		}
		prev_char = inp[i];
	}
	mlen = (len>mlen)?len:mlen;
	cout<<mlen;
}