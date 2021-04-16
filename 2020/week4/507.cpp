#include<bits/stdc++.h>
using namespace std;

int N[100000],Nsum[100000],ans_section[2],ans;

int main(){
    int B,s,b,i,j,sumi;
    Nsum[0]=0;
    cin>>b;
    for(B=1;B<=b;B++){
        cin>>s;
        for(i=0;i<s-1;i++)cin>>N[i];
        for(i=1;i<s;i++){
            Nsum[i]=Nsum[i-1]+N[i-1];
        }
        ans=-100000000;
        
        for(i=0;i<s-1;i++){
            for(j=i+1;j<s;j++){
                sumi=Nsum[j]-Nsum[i];
                if(sumi>ans){
                    ans=sumi;
                    ans_section[0]=i+1;
                    ans_section[1]=j+1;
                }else if(sumi==ans && j-i>ans_section[1]-ans_section[0]){
                    ans_section[0]=i+1;
                    ans_section[1]=j+1;
                }
            }
        }

        if(ans<0){
            cout<<"Route "<<B<<" has no nice parts\n";
        }else{
            cout<<"The nicest part of route "<<B<<" is between stops "<<ans_section[0]<<" and "<<ans_section[1]<<"\n";
        }
    }
}