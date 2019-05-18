#include<bits/stdc++.h>
using namespace std;



main(){
	int n;

	while(1){
		cin>>n;
		if(!n)
			break;
		int arr[n],i;

		for(i=0;i<n;i++)
			cin>>arr[i];

		queue<int> qin, qout;
		stack<int> st;

		for(i=0;i<n;i++){
			qin.push(arr[i]);
			//cout<<qin.front();
		}

        
		int count=1,k,l;

		while(!qin.empty()){
			//cout<<"run";
			k=qin.front();

			if(k==count){
				qin.pop();
				qout.push(k);
				count++;
			}
			else if((!st.empty())&&(st.top()==count)){
					l=st.top();
					st.pop();
					qout.push(l);
					count++;
			}
			else{
					qin.pop();
					st.push(k);
			}
			//cout<<st.top()<<"\n";
			
		}

		while(!st.empty()){
			k=st.top();
			st.pop();
			qout.push(k);
			count++;
		}

		//k=qout.back();
		if(k!=count-1)
				cout<<"no\n";
			else
				cout<<"yes\n";

     
	}
    
	
}