#include<bits/stdc++.h>
using namespace std;

int func(int mid, int *arr, int n, int c){
	int i, pos=arr[0], count=1;

	for(i=1;i<n;i++){
		if(arr[i]-pos >= mid){
			pos=arr[i];
			count++;

			if(count==c)
				return 1;
		}
	}

	return 0;
}

int find_max(int n, int c, int *arr){
	int l=0, r=arr[n-1], i, mid, max=-1, pos=arr[0];

	while(l<r){
		mid=(l+r)/2;

		//cout<<"l:"<<l;
		//cout<<"\nr:"<<r;
		//cout<<"\nmid:"<<mid;
		if(func(mid,arr,n,c)){
			//cout<<"\nfunc is true";
			if(mid>max)
				max=mid;
			l=mid+1;
 
			
		}
		else
			r=mid;
		//cout<<"\n\n";
	}
	return max;
}

main(){
	int t,n,c;
	cin>>t;
	while(t){
		cin>>n>>c;
		int arr[n],i;

		for(i=0;i<n;i++)
			cin>>arr[i];
		sort(arr,arr+n);
		//for(i=0;i<n;i++)
			//cout<<arr[i];

		int k=find_max(n,c,arr);
        cout<<k<<"\n";

		t--;
	}
}