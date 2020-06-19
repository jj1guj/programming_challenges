#include <bits/stdc++.h>
using namespace std;

int main(){
    int k,i,slen,sint,match,match_max,best_k,d_size,l,r;
    vector<string>D;
    vector<int>Space;
    string s,s_copy,S;
    while(getline(cin,s),s!="#")D.push_back(s);

    getline(cin,S);
    d_size=D.size();
    slen=S.size();
    match_max=0;
    best_k=0;

    for(k=0;k<=26;k++){
        s_copy=S;
        match=0;
        for(i=0;i<slen;i++){
            sint=(int)s_copy[i];
            if(sint==32)sint=91;

            sint+=k;
            if(sint==91){
                sint=32;
            }else if(sint>91){
                sint-=27;
            }
            s_copy[i]=(char)sint;
        }
        istringstream iss(s_copy);
        while(iss>>s){
            for(i=0;i<d_size;i++){
                if(s==D[i]){
                    match++;
                    break;
                }
            }
        }
        if(match>match_max){
            match_max=match;
            best_k=k;
        }
    }

    for(i=0;i<slen;i++){
        sint=(int)S[i];
        if(sint==32)sint=91;

        sint+=best_k;
        if(sint==91){
            sint=32;
        }else if(sint>91){
            sint-=27;
        }
        S[i]=(char)sint;
    }

    //Space.push_back(0);
    for(i=0;i<slen;i++){
        if(S[i]==' ')Space.push_back(i);
    }
    //Space.push_back(slen);
    l=0;
    for(i=0;i<Space.size();i++){
        if(Space[i]-l>=61){
            cout<<S.substr(l,Space[i-1]-l)<<endl;
            l=Space[i-1]+1;
            i--;
        }
    }
    cout<<S.substr(l,slen-l-1)<<endl;
}