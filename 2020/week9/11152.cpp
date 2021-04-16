#include<bits/stdc++.h>
using namespace std;

int main(){
    double a,b,c,r,R,cosa,S_tr,S0,S1,S2;
    while(cin>>a>>b>>c){
        cosa=(a*a+b*b-c*c)/(2*a*b);
        R=c/(2*sqrt(1-cosa*cosa));
        S_tr=a*b*sqrt(1-cosa*cosa)/2;
        r=2*S_tr/(a+b+c);
        S2=M_PI*r*r;
        S1=S_tr-S2;
        S0=M_PI*R*R-S_tr;
        printf("%.4lf %.4lf %.4lf\n",S0,S1,S2);
    }
}