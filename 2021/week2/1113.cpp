#include<bits/stdc++.h>
using namespace std;
int Board[8][8];

int main(){
    int L[8],itr=1;
    vector<vector<int>>Ans;
    //前計算
    vector<int>v(8),ref(8);
    iota(v.begin(),v.end(),0);
    do{
        bool flg=true;
        for(int i=0;i<8;++i){
            ref[i]=v[i];
            Board[ref[i]][i]=1;
        }

        //判定(異なる行・列にいることは確定しているので斜めの利きだけ見る)
        for(int i=0;i<8;++i){
            int cnx=ref[i],cny=i;
            //右斜め上方向
            for(int j=1;j<=min(7-cny,cnx);++j)if(Board[cnx-j][cny+j]==1)flg=false;
            //右斜め下方向
            for(int j=1;j<=min(7-cny,7-cnx);++j)if(Board[cnx+j][cny+j]==1)flg=false;
        }
        if(flg)Ans.push_back(ref);
        //reset Board
        for(int i=0;i<8;++i)Board[ref[i]][i]=0;
    }while(next_permutation(v.begin(),v.end()));

    while(cin>>L[0]){
        for(int i=1;i<8;++i)cin>>L[i];
        int ans=100;
        for(int i=0;i<Ans.size();++i){
            int ref=0;
            for(int j=0;j<8;++j)if(L[j]-1!=Ans[i][j])++ref;
            ans=min(ans,ref);
        }

        cout<<"Case "<<itr<<": "<<ans<<endl;
        ++itr;
    }
}