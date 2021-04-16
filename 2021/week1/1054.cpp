#include<bits/stdc++.h>
using namespace std;
int C[10000];

int main(){
    int T;cin>>T;
    for(int t=1;t<=T;++t){
        int N,ans=0,c;cin>>N;
        for(int i=0;i<N;++i){
            cin>>c;
            ans=max(ans,c);
        }
        cout<<"Case "<<t<<": "<<ans<<endl;
    }
}