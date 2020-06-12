#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string>S,Out{" is immediately decodable\n"," is not immediately decodable\n"};
    string sin,s0,s1;
    int set=1,i,j,flg;
    while(1){
        cin>>sin;
        if(cin.fail())return 0;
        if(sin=="9"){
            flg=0;
            sort(S.begin(),S.end());
            //for(i=0;i<(int)S.size();i++)cout<<S[i]<<" ";
            //cout<<"\n";
            for(i=0;i<(int)S.size()-1;i++){
                s0=S[i];
                s1=S[i+1];
                if(s0.size()<=s1.size()){
                    for(j=0;j<(int)s0.size();j++){
                        if(s0[j]!=s1[j]){
                            break;
                        }
                    }
                    if(j==(int)s0.size()){
                        flg=1;
                        break;
                    }
                }
                //if(flg==1)break;
            }
            cout<<"Set "<<set<<Out[flg];
            S.clear();
            set++;
        }else{
            S.push_back(sin);
        }
    }
}