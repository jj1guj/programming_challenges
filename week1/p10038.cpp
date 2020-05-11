#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> out{"Jolly","Not jolly"};
    int n,i,flg;
    vector<int>L(3000),diff(3000);
    
    while(1){
        cin>>n;
        if(cin.fail())return 0;
        flg=0;
        for(i=0;i<n;i++){
            cin>>L[i];
            diff[i]=0;
            if(L[i]<=0)flg=1;
        }
        if(flg==0){
            for(i=0;i<n-1;i++){
                if(diff[abs(L[i+1]-L[i])]!=0){
                    flg=1;
                    break;
                }
                diff[abs(L[i+1]-L[i])]+=1;
            }
        }
        cout<<out[flg]<<"\n";
    }
}