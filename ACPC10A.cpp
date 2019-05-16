#include<bits/stdc++.h>
using namespace std;

main(){
	int n1,n2,n3;

	while(1){
	cin>>n1>>n2>>n3;
	if(n1==0 && n2==0)
		break;

	if(n2-n1 == n3-n2)
		cout<<"AP "<<2*n3-n2;
	else
		cout<<"GP "<<n3*n3/n2;

	cout<<"\n";
}
}