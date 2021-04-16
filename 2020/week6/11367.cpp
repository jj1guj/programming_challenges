#include<bits/stdc++.h>
using namespace std;
int n,m,Q,s,e,c,P[1000],G[1100][1100],V[1100][1100][110];

int main(){
    int i,j,q,u,v,d;
    cin>>n>>m;
    for(i=0;i<n;i++)cin>>P[i];
    for(i=0;i<n;i++)for(j=0;j<n;j++)G[i][j]=0;
    for(i=0;i<m;i++){
        cin>>u>>v>>d;
        G[u][v]=d;
        G[v][u]=d;
    }

    cin>>Q;
    for(q=0;q<Q;q++){
        cin>>s>>e>>c;
        
    }
}