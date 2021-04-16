#include<bits/stdc++.h>
using namespace std;
#define INF 1000000000
int l,n,C[100],A[100],dp[100][100];

int cost(int i,int j){
    int k,add=INF,steps=0;
    //cout<<i<<" "<<j<<endl;
    //if(i==j)return 0;
    if(dp[i][j]!=-1)return dp[i][j];

    for(k=i+1;k<j;k++){
        steps++;
        add=min(add,cost(i,k)+cost(k,j));
    }
    if(steps==0)add=0;

    return dp[i][j]=abs(A[i]-A[j])+add;
}

int main(){
    int i,j,k;
    while(cin>>l,l!=0){
        //input
        cin>>n;
        for(i=1;i<=n;i++)cin>>A[i];
        A[n+1]=l;

        //dpテーブルのリセット
        for(i=0;i<100;i++)for(j=0;j<100;j++){
            if(i==j)dp[i][j]=0;
            else dp[i][j]=-1;
        }

        //solve

        //output
        cout<<"The minimum cutting is "<<cost(0,n+1)-l<<".\n";
    }
}