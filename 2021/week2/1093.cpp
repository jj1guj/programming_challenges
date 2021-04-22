#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
    while(true){
        cin>>N>>M;
        if(N==0&&M==0)break;
        set<int>S;
        int ref;
        for(int i=0;i<N;++i){
            cin>>ref;
            S.insert(ref);
        }
        int ans=0;
        for(int i=0;i<M;++i){
            cin>>ref;
            if(S.find(ref)!=S.end())++ans;
        }
        cout<<ans<<endl;
    }
}