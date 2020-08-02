#include<bits/stdc++.h>
using namespace std;

int L[1000000];
int N=100000;

int collatz(int k){
    int res;
    if(k>=1 && k<=N && L[k-1]!=-1)return L[k-1];
    if(k%2==1)res=collatz(3*k+1)+1;
    else res=collatz(k/2)+1;
    if(k>=1 && k<=N)L[k-1]=res;
    return res;
}

int main(){
    int a,b,i,ans;
    L[0]=1;
    for(i=1;i<1000000;i++)L[i]=-1;
    while(cin>>a>>b){
        ans=0;
        for(i=min(a,b);i<=max(a,b);i++)ans=max(ans,collatz(i));
        cout<<a<<" "<<b<<" "<<ans<<"\n";
    }
}