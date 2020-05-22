#include<stdio.h>
int L[100005],R[100005];

int main(){
    int S,B,l,r,i;
    while(scanf("%d %d",&S,&B),S!=0||B!=0){
        for(i=0;i<S;i++){
            R[i]=i+1;
            L[i]=i-1;
        }
        R[S-1]=-1;
        for(i=0;i<B;i++){
            scanf("%d %d",&l,&r);
            l--;
            r--;
            L[R[r]]=L[l];
            L[0]=-1;
            if(L[l]!=-1){
                printf("%d ",L[l]+1);
            }else{
                printf("* ");
            }

            R[L[l]]=R[r];
            R[S-1]=-1;
            if(R[r]!=-1){
                printf("%d\n",R[r]+1);
            }else{
                printf("*\n");
            }
        }
        printf("-\n");
    }
}