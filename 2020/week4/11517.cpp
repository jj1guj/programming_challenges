#include<bits/stdc++.h>
using namespace std;

int T,P,N,dp[21001],C[110];

int main(){
    int t,i,j;
    cin>>T;
    for(t=0;t<T;t++){
        cin>>P;
        cin>>N;
        for(i=0;i<N;i++)cin>>C[i];
        for(i=0;i<=21000;i++)dp[i]=-1;
        dp[0]=0;
        for(i=0;i<N;i++){
            for(j=P;j>=0;j--){
                if(j+C[i]<=21000 && dp[j]!=-1){
                    if(dp[j+C[i]]==-1){
                        dp[j+C[i]]=dp[j]+1;
                    }else{
                        dp[j+C[i]]=min(dp[j+C[i]],dp[j]+1);
                    }
                }
            }
        }
        for(i=P;i<=21000;i++){
            if(dp[i]!=-1){
                cout<<i<<" "<<dp[i]<<"\n";
                break;
            }
        }
    }
}