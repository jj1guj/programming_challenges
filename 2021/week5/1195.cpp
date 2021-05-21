#include<bits/stdc++.h>
using namespace std;
int G[100][100],T,N;
bool Ans[100][100];
void dfs(int cn, int v, bool reachable[100]){//v: 経由を禁止する頂点
    reachable[cn]=true;
    for(int i=0;i<N;++i){
        if(i!=v||v==0){
            if(G[cn][i]==1 && !reachable[i]){
                dfs(i,v,reachable);
            }
        }
    }
}

int main(){
    cin>>T;
    bool reachable[100];//到達できるならtrue, できないならfalse
    string BtoS[2]={"N","Y"};
    for(int t=0;t<T;++t){
        cin>>N;
        for(int i=0;i<N;++i)for(int j=0;j<N;++j)cin>>G[i][j];
        //DFS
        for(int v=0;v<N;++v){
            //リセット
            for(int i=0;i<N;++i)reachable[i]=false;
            dfs(0,v,reachable);
            for(int i=0;i<N;++i){
                if(v==0){
                    Ans[v][i]=reachable[i];
                }else Ans[v][i]=!(Ans[0][i]==reachable[i]);
            }
        }

        //output
        cout<<"Case "<<t+1<<":\n";
        for(int i=0;i<2*N+1;++i){
            for(int j=0;j<2*N+1;++j){
                if(i%2==0){
                    if(j==0||j==2*N)cout<<"+";
                    else cout<<"-";
                }else{
                    if(j%2==0)cout<<"|";
                    else cout<<BtoS[Ans[i/2][j/2]];
                }
            }
            cout<<endl;
        }
    }
}