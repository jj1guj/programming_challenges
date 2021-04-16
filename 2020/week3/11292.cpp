/*#pragma GCC target("avx512f,avx512dq,avx512cd,avx512bw,avx512vl")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,i,dh,kh,slay,ans;
    vector<int> D,K;
    while(cin>>n>>m,n!=0 || m!=0){
        slay=0;
        ans=0;
        for(i=0;i<n;i++){
            cin>>dh;
            D.push_back(dh);
        }
        for(i=0;i<m;i++){
            cin>>kh;
            K.push_back(kh);
        }
        sort(D.begin(),D.end());
        sort(K.begin(),K.end());

        for(i=0;i<m;i++){
            if(K[i]>=D[slay]){
                ans+=K[i];
                slay++;
            }
        }
        if(slay>=n)cout<<ans<<endl;
        if(slay<n)cout<<"Loowater is doomed!"<<endl;
        D.clear();
        K.clear();
    }
}