#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,ans,i,a;
    while(cin>>n,n>=3){
        ans=0;
        if(n>4){
            a=(n-1)/2;
            ans+=(a*(a+1)*(n-a+1))/2-n*a;
            ans+=((n-2)*(n-1)*(-2-n)-a*(a+1)*(2*a-3*n+2))/6+(n*(n-1)*(n-2-a))/2;
        }
        /*for(i=2;i<=n-2;i++){
            if(2*i+1>n){
                ans+=((n-i-1)*(n-i))/2;
            }else{
                ans+=(i-1)*(n-2*i)+(i*(i-1))/2;
            }
        }*/
        cout<<ans<<endl;
    }
}