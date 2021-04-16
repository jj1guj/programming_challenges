#include<bits/stdc++.h>
using namespace std;
#define N 20000001
#define ll long long
vector<int>L(N,-1);

ll dfs(ll i){
    if(i<=N&&(L[i]!=-1||i==1))return L[i];
    if(i%2==0){
        if(i<=N)return L[i]=dfs(i/2)+1;
        else return dfs(i/2)+1;
    }else{
        if(i<=N)return L[i]=dfs(3*i+1)+1;
        else return dfs(3*i+1)+1;
    }
}

int main(){
    L[1]=1;
    ll l,r;
    while(cin>>l>>r){
        ll ans=0;
        for(ll i=min(l,r);i<=max(l,r);++i){
            ans=max(ans,dfs(i));
        }
        cout<<l<<" "<<r<<" "<<ans<<endl;
    }
}