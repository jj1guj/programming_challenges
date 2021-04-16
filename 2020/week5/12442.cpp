#include<bits/stdc++.h>
using namespace std;

int T,N,visited[50000];

void dfs(int v){
    visited[v]=1;
    
}

int main(){
    int t,i,j,x,y,ans,vmax;
    cin>>T;
    for(t=1;t<=T;t++){
        cin>>N;
        vector<vector<int>>G(N);
        vector<int>Gc(N);
        for(i=0;i<N;i++){
            cin>>x>>y;
            visited[i]=0;
            x--;
            y--;
            G[x].push_back(y);
            Gc[x]++;
        }

        vmax=0;
        for(i=0;i<N;i++){

        }
    }
}