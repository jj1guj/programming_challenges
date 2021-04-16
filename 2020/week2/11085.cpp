#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>L;
vector<int>row(8,-1);
vector<int>checked(8);
int ans=0;

//cnは列！！！
void dfs(int cn){
    int i,j,flgs;
    if(cn<8){
        //iは行！！！！
        for(i=0;i<8;i++){
            if(checked[i]==0){
                //斜めの利きを探索
                flgs=0;
                //斜め左上方向
                for(j=1;j<=min(cn,i);j++){
                    if(row[cn-j]==i-j){
                        flgs=1;
                        break;
                    }
                }

                //斜め左下方向
                for(j=1;j<=min(cn,7-i);j++){
                    if(row[cn-j]==i+j){
                        flgs=1;
                        break;
                    }
                }

                if(flgs==0){
                    if(cn==7){
                        row[cn]=i;
                        L.push_back(row);
                        ans++;
                    }else{
                        row[cn]=i;
                        checked[i]=1;
                        dfs(cn+1);
                        row[cn]=-1;
                        checked[i]=0;
                    }
                }
            }
        }
    }
}

int main(){
    int i,j,ans,cases,Lsize,calc;
    vector<int>In(8);
    dfs(0);
    Lsize=L.size();
    cases=1;
    while(1){
        ans=1000000;
        for(i=0;i<8;i++){
            cin>>In[i];
        }
        if(cin.fail()||cin.eof())return 0;

        for(i=0;i<Lsize;i++){
            calc=0;
            for(j=0;j<8;j++){
                if(In[j]-1!=L[i][j])calc++;
            }
            ans=min(ans,calc);
        }
        cout<<"Case "<<cases<<": "<<ans<<endl;
        cases++;
    }
}