#include<bits/stdc++.h>
using namespace std;

vector<int>L(1000001);

int getmax(int a,int b){
    int i,out=0;
    a--;
    b--;
    for(i=a;i<=b;i++)out=max(out,L[i]);
    return out;
}

int main(){
    int ans=0,calc,n,i,j,a,b;
    for(i=0;i<=1000000;i++){
        n=i+1;
        L[i]=1;
        while(n!=1){
            if(n%2==0){
                n/=2;
            }else{
                n=3*n+1;
            }
            L[i]++;
        }
    }

    while(true){
        cin>>a;
        if(cin.fail()||cin.eof())return 0;
        cin>>b;
        cout<<a<<" "<<b<<" "<<getmax(min(a,b),max(a,b))<<"\n";
    }
}