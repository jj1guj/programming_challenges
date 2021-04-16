/*#pragma GCC target("avx512f,avx512dq,avx512cd,avx512bw,avx512vl")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")*/
#include<bits/stdc++.h>
using namespace std;

int N,M,C,K[100],G[1000][1000],dp[100][1000];

int main(){
    int n,i,j,k,ans,g;
    cin>>N;
    for(n=0;n<N;n++){
        //M: 予算, C: 買わなきゃいけない商品数
        cin>>M>>C;
        //dpテーブルの初期化
        for(i=0;i<C;i++)for(j=0;j<=M;j++)dp[i][j]=0;
        for(i=0;i<C;i++){
            cin>>K[i];
            for(j=0;j<K[i];j++)cin>>G[i][j];
        }
        //DはDPのD
        //dpテーブルは行が商品の個数, 列が合計の値段
        ans=-1;
        for(i=0;i<C;i++){
            for(k=0;k<K[i];k++){
                g=G[i][k];
                if(i==0){
                    if(g<=M)dp[i][g]=1;
                }else{
                    for(j=0;j<=M;j++){
                        if(j>=g){
                            if(dp[i-1][j-g]==1){
                                dp[i][j]=1;
                            }
                        }
                    }
                }
            }
        }
        for(j=0;j<=M;j++)if(dp[C-1][j]==1)ans=j;
        if(ans==-1)cout<<"no solution\n";
        if(ans>-1)cout<<ans<<"\n";
    }
}