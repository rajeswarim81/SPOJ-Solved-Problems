#include <bits/stdc++.h>
#include <string>
using namespace std;

#define MAXN 10000

vector<int> graph[MAXN+1];
bool visited[MAXN+1], ans;
//int count[MAXN+1];



main(){
	int n;
	string space;
	cin>>n;
	getline(cin,space);

	while(n--){
		string s1, s2, s3, s4, s5;
		cin>>s1>>s2>>s3>>s4>>s5;
		//cout<<s1<<s2<<s3<<s4<<s5<<"\n";

		getline(cin,space); int k=0;

		while(1){
			int i;
			for(i=0;i<s1.length();i++){
				if(s1[i]=='m')
					k=1;
			}
			if(k>0)
				break;

			for(i=0;i<s3.length();i++){
				if(s3[i]=='m')
					k=2;
			}

			if(k>0)
				break;

			for(i=0;i<s5.length();i++){
				if(s5[i]=='m')
					k=3;
			}


		}

		int r1, r2, r3;

		switch(k){
			case 1: 
            r2=stoi(s3),r3=stoi(s5);
			r1=r3-r2; break;
			case 2: 
            r1=stoi(s1),r3=stoi(s5);
			r2=r3-r1; break;
			case 3: 
			r1=stoi(s1),r2=stoi(s3);
			r3=r1+r2; break;


		}

		cout<<r1<<"\t+\t"<<r2<<"\t=\t"<<r3<<"\n";

	}
}