#include <bits/stdc++.h>
using namespace std;

int main(){
    double l,w,h,theta,tna_theta,ans;
    while(cin>>l>>w>>h>>theta){
        if(tan(M_PI*theta/180)>h/l){
            ans=(h*h*w)/(2*tan(M_PI*theta/180));
        }else{
            ans=l*w*(2*h-l*tan(M_PI*theta/180))/2;
        }
        printf("%.3lf mL\n",ans);
    }
}