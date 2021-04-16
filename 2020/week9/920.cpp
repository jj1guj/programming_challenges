#include<bits/stdc++.h>
using namespace std;

int C,N;
vector<vector<double> > M;

int main(){
    int c,i;
    double ans,d,pmax,x,a,b;
    cin>>C;
    for(c=0;c<C;c++){
        cin>>N;
        M.resize(N,vector<double>(2));
        for(i=0;i<N;i++)cin>>M[i][0]>>M[i][1];
        sort(M.begin(),M.end());
        ans=0;
        pmax=0;
        for(i=N-2;i>=0;i-=2){
            d=0;
            if(i==N-2){
                d=sqrt(powf(M[i][0]-M[i+1][0],2)+powf(M[i][1]-M[i+1][1],2));
            }else if(M[i][1]>pmax){
                if(M[i+1][1]>=pmax){
                    d=sqrt(powf(M[i][0]-M[i+1][0],2)+powf(M[i][1]-M[i+1][1],2));
                }else{
                    a=(M[i][1]-M[i+1][1])/(M[i][0]-M[i+1][0]);
                    b=M[i][1]-a*M[i][0];
                    x=(pmax-b)/a;
                    d=sqrt(powf(M[i][0]-x,2)+powf(M[i][1]-pmax,2));
                }
            }
            ans+=d;
            pmax=max(pmax,M[i][1]);
        }
        printf("%.2lf\n",ans);
    }
}