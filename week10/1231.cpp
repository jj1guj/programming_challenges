#include<bits/stdc++.h>
using namespace std;

int c,t,h,f,N[10000],A[10000][10000];

int main(){
    int i,j;
    while(cin>>c,c!=0){
        cin>>t>>h>>f;
        for(i=0;i<t;i++){
            cin>>N[i];
            for(j=0;j<N[i];j++)cin>>A[i][j];
        }
    }
}