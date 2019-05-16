#include<bits/stdc++.h>
using namespace std;

main(){
	int n,sum=0;
	cin>>n;
	int k=(int)sqrt(n);


	for(int i=1;i<=k;i++)
		sum += (n/i)-(i-1);

	cout<<sum<<"\n";
	
}