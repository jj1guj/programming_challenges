#include<bits/stdc++.h>
using namespace std;

int main(){
    for(;;){
        int S,B,L[100001],R[100001],l,r;
        cin>>S>>B;
        //init
        if(S==0&&B==0)return 0;
        for(int i=1;i<=S;++i){
            if(i==1)L[i]=-1;
            else L[i]=i-1;
        }
        for(int i=1;i<=S;++i){
            if(i==S)R[i]=-1;
            else R[i]=i+1;
        }
        for(int i=0;i<B;++i){
            cin>>l>>r;

            int l_ref,r_ref;
            r_ref=R[r];
            l_ref=L[l];
            if(l_ref==-1)cout<<"* ";
            else cout<<l_ref<<" ";
            if(r_ref==-1)cout<<"*";
            else cout<<r_ref;
            cout<<endl;

            //update
            R[l_ref]=r_ref;
            L[r_ref]=l_ref;
        }
        cout<<"-\n";   
    }
}