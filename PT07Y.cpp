#include<bits/stdc++.h>
using namespace std;

#define MAXN 10000

vector<int> graph[MAXN+1];
bool visited[MAXN+1], ans;
//int count[MAXN+1];

void DFS(int n){
	int i,count=0;
	for(i=0;i<graph[n].size();i++)
		if(visited[graph[n][i]]){
            count++;
			//cout<<n<<graph[n][i]<<"\there3\n";
			ans=false;
		}
    
			

	for(i=0;i<graph[n].size();i++){
		if( !visited[graph[n][i]] ){
			visited[graph[n][i]]=true;
			DFS(graph[n][i]);
		}
	}

}

main(){
	int n,m;
	cin>>n>>m;
	ans=true;

	int i,p,q;
	for(i=1;i<=m;i++){
		cin>>p>>q;
		graph[p].push_back(q);
		//graph[q].push_back(p);
	}

	if(n != m+1){
		//cout<<"here 1";
		ans=false;
	}

    for(i=0;i<=n;i++){
    	//count[i]=0;
    	visited[i]=false;
    }

    visited[1]=true;
    //cout<<visited[graph[1][0]];

    DFS(1);

    for(i=1;i<=n;i++)
    	if(!visited[i]){
    		//cout<<"here2\n";
    		ans=false;
    	}

    	if(ans)
    		cout<<"YES\n";
    	else
    		cout<<"NO\n";

	
}