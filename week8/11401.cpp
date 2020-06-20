#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,ans,i;
    while(cin>>n,n>=3){
        ans=n;
        
        for(i=2;i<=n-2;i++){
            if(2*i+1>n)break;
            ans+=i-1;
        }
        cout<<ans<<endl;
    }
}