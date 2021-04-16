#include<bits/stdc++.h>
using namespace std;

int A[30000];
int D[30000];
int main(){
    int n;
    bool flg;
    while(cin>>n){
        flg=true;
        for(int i=0;i<n;++i){
            cin>>A[i];
            D[i]=0;
        }
        for(int i=1;i<n;++i){
            int d=abs(A[i]-A[i-1]);
            if(d==0||d>n-1){
                flg=false;
                break;
            }
            D[d]+=1;
        }
        if(flg)for(int i=1;i<=n-1;++i){
            if(D[i]!=1){
                flg=false;
                break;
            }
        }
        if(flg)cout<<"Jolly\n";
        else cout<<"Not jolly\n";
    }
}