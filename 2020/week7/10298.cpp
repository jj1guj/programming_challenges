#include<bits/stdc++.h>
using namespace std;

int main(){
    int slen,i,j;
    bool flg;
    string s,mask;
    while(cin>>s,s!="."){
        slen=s.size();
        flg=false;
        for(i=1;i<=slen;i++){
            if(slen%i==0){
                mask=s.substr(0,i);
                for(j=1;j<=slen/i-1;j++){
                    if(mask!=s.substr(i*j,i))break;
                }
                if(j==slen/i)flg=true;
            }
            if(flg)break;
        }
        cout<<slen/i<<"\n";
    }
}