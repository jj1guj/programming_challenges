#include<bits/stdc++.h>
using namespace std;

int T,N,G[1000][1000],A[1000][1000],Go[1000][1000];


//Xを取り除いたときYにたどり着けるか
void dfs(int cn,int X,int Y){
    int i;
    if(cn==Y && cn!=X){
        A[X][Y]=1;
    }else{
        for(i=0;i<N;i++){
            if(G[cn][i]==1){
                dfs(i,X,Y);
            }
        }
    }
}

int main(){
    int i,j,t,k;
    cin>>T;
    for(t=0;t<T;t++){
        cin>>N;
        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                cin>>G[i][j];
                A[i][j]=0;
            }
        }

        //iを取り除いてjに行く
        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                Go[i][j]=G[i][j];
                Go[j][i]=G[j][i];
                G[i][j]=0;
                G[j][i]=0;
            }
            for(j=0;j<N;j++){
                dfs(0,i,j);
            }

            for(j=0;j<N;j++){
                G[i][j]=Go[i][j];
                G[j][i]=Go[j][i];
            }
        }


        for(i=0;i<2*N+1;i++){
            if(i%2==0){
                for(j=0;j<2*N+1;j++){
                    if(j==0 || j==2*N)cout<<"+";
                    else cout<<"-";
                }
            }else{
                for(j=0;j<2*N+1;j++){
                    if(j%2==0)cout<<"|";
                    else if(A[i/2][j/2]==1)cout<<"N";
                    else cout<<"Y";
                }
            }
            cout<<"\n";
        }
    }
}