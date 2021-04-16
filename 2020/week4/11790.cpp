#include<bits/stdc++.h>
using namespace std;

int N,T,H[20000],W[20000],LIS[20000],LDS[20000],PI[20000],PD[20000];

int main(){
    int t,i,j,ansI,ansD,add;
    cin>>T;
    for(t=0;t<T;t++){
        cin>>N;
        ansI=0;
        ansD=0;
        for(i=0;i<N;i++)cin>>H[i];
        for(i=0;i<N;i++){
            cin>>W[i];
            LIS[i]=W[i];
            LDS[i]=W[i];
            PI[i]=-1;
            PD[i]=-1;
        }

        //LISを求める
        for(i=1;i<N;i++){
            add=0;
            for(j=0;j<i;j++){
                if(H[j]<H[i]){
                   add=max(add,LIS[j]);
                }
            }
            LIS[i]+=add;
        }

        //LDSを求める
        for(i=1;i<N;i++){
            add=0;
            for(j=0;j<i;j++){
                if(H[j]>H[i]){
                    add=max(add,LDS[j]);
                }
            }
            LDS[i]+=add;
        }

        for(i=0;i<N;i++){
            ansI=max(ansI,LIS[i]);
            ansD=max(ansD,LDS[i]);
        }

        //答えの出力
        cout<<"Case "<<t+1<<". ";
        if(ansD>ansI){
            cout<<"Decreasing ("<<ansD<<"). Increasing ("<<ansI<<").\n";
        }else{
            cout<<"Increasing ("<<ansI<<"). Decreasing ("<<ansD<<").\n";
        }
    }
}