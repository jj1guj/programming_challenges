#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t,T;cin>>T;
    for(t=0;t<T;++t){
        int n,p,P[20],dp[1001],i,j;
        cin>>n>>p;
        for(i=0;i<p;++i)cin>>P[i];
        for(i=1;i<=n;++i)dp[i]=-1;
        dp[0]=0;
        for(i=0;i<p;++i)for(j=n;j>=P[i];--j){
            if(dp[j-P[i]]!=-1)dp[j]=dp[j-P[i]]+1;
        }
        if(dp[n]==-1)cout<<"NO\n";
        else cout<<"YES\n";
    }
}