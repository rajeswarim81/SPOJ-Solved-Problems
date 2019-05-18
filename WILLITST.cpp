#include<bits/stdc++.h>
using namespace std;



main(){
	long long n;
	cin>>n;
	while(n%2 == 0)
		n=n/2;
	if(n==1)
		cout<<"TAK\n";
	else
		cout<<"NIE\n";
}