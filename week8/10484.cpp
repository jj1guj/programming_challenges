#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll N,D,Ds,i,pcount,n,j,primes_count,ans,ns;
    bool flg;
    while(cin>>N>>D,N!=0||D!=0){
        if(N==0){
            if(abs(D)!=1)cout<<0<<endl;
            else cout<<1<<endl;
        }else{
            D=abs(D);
            vector<ll>D_primes,D_pcount;
            Ds=sqrt(D);
            for(i=2;i<=Ds;i++){
                if(D%i==0){
                    D_primes.push_back(i);
                    pcount=0;
                    while(D%i==0){
                        D/=i;
                        pcount++;
                    }
                    D_pcount.push_back(pcount);
                }
            }
            if(D>1){
                D_primes.push_back(D);
                D_pcount.push_back((ll)1);
            }
            primes_count=D_primes.size();
            flg=true;
            for(i=0;i<primes_count;i++){
                if(D_primes[i]>100){
                    flg=false;
                    break;
                }
            }

            if(flg){
                    vector<ll>A(100,1);

                for(i=2;i<=N;i++){
                    n=i;
                    ns=sqrt(n);
                    for(j=2;j<=ns;j++){
                        if(n%j==0){
                            while(n%j==0){
                                n/=j;
                                A[j-1]++;
                            }
                        }
                    }
                    if(n>1){
                        A[n-1]++;
                    }
                }

                for(i=0;i<primes_count;i++){
                    A[D_primes[i]-1]=max((ll)0,A[D_primes[i]-1]-D_pcount[i]);
                }
                ans=1;
                for(i=0;i<100;i++){
                    ans*=A[i];
                }
            }else{
                ans=0;
            }
            

            cout<<ans<<endl;
        }
    }
}