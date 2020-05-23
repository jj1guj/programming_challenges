#pragma GCC target("avx512f,avx512dq,avx512cd,avx512bw,avx512vl")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
using namespace std;

int main(){
    int A,B,C,N,t,x,y,z,flg;
    cin>>N;
    for(t=0;t<N;t++){
        cin>>A>>B>>C;
        flg=0;
        for(x=-100;x<=100;x++){
            for(y=-100;y<=100;y++){
                z=A-x-y;
                if(x*y*z==B && x*x+y*y+z*z==C){
                    if(x!=y && y!=z && z!=x){
                        flg=1;
                        cout<<x<<" "<<y<<" "<<z<<endl;
                        break;
                    }
                }
            }
            if(flg==1)break;
        }
        if(flg==0)cout<<"No solution."<<endl;
    }
}