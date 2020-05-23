#pragma GCC target("avx512f,avx512dq,avx512cd,avx512bw,avx512vl")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
using namespace std;

int P[100],dp[10000];

int main(){
    int T,n,p,t,i,j;
    vector<string>ans{"NO","YES"};
    cin>>T;
    for(t=0;t<T;t++){
        cin>>n>>p;
        for(i=0;i<p;i++)cin>>P[i];

        //DPテーブルの初期化
        for(i=0;i<=n;i++)dp[i]=0;
        dp[0]=1;

        for(i=0;i<p;i++){
            for(j=0;j<=n;j++){
                if(dp[n-j]==1)dp[n-j+P[i]]=1;
            }
        }
        cout<<ans[dp[n]]<<endl;
    }
}