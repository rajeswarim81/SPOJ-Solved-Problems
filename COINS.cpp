#include<bits/stdc++.h>
using namespace std;

map<long long, long long> dp;

long long coin(long long n){
	if(n==0)
		return n;
	else if(dp[n]!=0)
		return dp[n];
	dp[n]=max(n, coin(n/2)+coin(n/3)+coin(n/4));
	return dp[n];
}

main(){
	long long n;
	while((cin>>n)){
		cout<<coin(n)<<"\n";
	}
}