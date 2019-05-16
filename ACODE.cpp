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


int count(int n){
	int length=count_dig(n);
	int arr[length+1];

	for(int i=length;i>0;i--){
        arr[i]=n%10;
        n=n/10;
    }

	int dp[length+1];
	for(int i=0;i<=length;i++)
		dp[i]=0;
	dp[1]=1;

	for(int i=2;i<=length;i++){

		dp[i]=dp[i-1];
        int l=10*arr[i-1] + arr[i];

        if(l>9 && l<27){
        	if(i==2)
        		dp[i]++;
        	else
        		dp[i]+=dp[i-2];
        }
	}

	return dp[length];
}


main(){
	//string n;
	while(1){
		cin>>n;
		if(!n)
			break;
		cout<<count(n)<<"\n";
	}
	
}