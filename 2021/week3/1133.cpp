#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,i,A,B,C,Cs,x,y,z;cin>>n;
    bool flg;
    for(i=0;i<n;++i){
        cin>>A>>B>>C;
        Cs=sqrt(C);
        flg=false;
        for(x=-Cs-1;x<Cs;++x){
            for(y=x+1;y<=Cs;++y){
                z=A-x-y;
                if(x!=z&&y!=z){
                    if(x*y*z==B&&x*x+y*y+z*z==C){
                        cout<<x<<" "<<y<<" "<<z<<endl;
                        flg=true;
                        break;
                    }
                }
            }
            if(flg)break;
        }
        if(!flg)cout<<"No solution.\n";
    }
}