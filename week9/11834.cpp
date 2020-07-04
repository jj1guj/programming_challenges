#include<bits/stdc++.h>
using namespace std;

int main(){
    double L,C,R1,R2;
    while(cin>>L>>C>>R1>>R2,L!=0 || C!=0 || R1!=0 || R2!=0){
        if(min(L,C)>=2*max(R1,R2) && powf(R1+R2-C,2)+powf(R1+R2-L,2)>=powf(R1+R2,2)){
            cout<<"S\n";
        }else{
            cout<<"N\n";
        }
    }
}