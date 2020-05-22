S,B=map(int,input().split())

while S!=0 or B!=0:
    R=[i+1 for i in range(S)]
    R[S-1]=-1
    L=[i-1 for i in range(S)]
    ls=0#左方向における最初の生存者
    rs=1#右方向における最初の生存者
    for i in range(B):
        l,r=map(int,input().split())
        l-=1
        r-=1
        L[R[r]]=L[l]
        L[0]=-1
        if L[l]!=-1:
            ansl=L[l]+1
        else:
            ansl="*"

        R[L[l]]=R[r]
        R[S-1]=-1
        if R[r]!=-1:
            ansr=R[r]+1
        else:
            ansr="*"
        print(ansl,ansr)
        #print(R)
        #print(L)

    print("-")
    S,B=map(int,input().split())