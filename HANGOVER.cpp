#include<bits/stdc++.h>
using namespace std;



main(){
	float n;
	while(1){
		cin>>n;
		if(n==0.0)
			break;
		else{
			float sum=0,count=1;
			while(sum<=n){
				sum +=(1/(1+count));
				count++;
			}
			cout<<count-1<<" card(s)\n";
		}
	}
}