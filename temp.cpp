#include<bits/stdc++.h>
using namespace std;

int count_dig(int n){
	int count=0;
	while(n){
		count++;
		n=n/10;
	}
	return count;
}


main(){
	int n=1;
	while(1){
		cin>>n;
		if(!n)
			break;
		cout<<count_dig(n)<<"\n";
	}
	
}