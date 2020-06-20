#10000までの素数を求める
A=[i for i in range(2,10001)]
P=[]
while A[0]<=100:
    a=A[0]
    A=[i for i in A if i%a!=0]
    P.append(a)
P.extend(A)
Slen=len(P)
S=[0]*(len(P)+1)
L=[0]*(sum(P)+1)
L[0]=1

for i in range(len(P)):
    S[i+1]=S[i]+P[i]
    L[S[i+1]]=1

N=int(input())
while N!=0:
    ans=0
    for i in range(Slen+1):
        if S[i]-N>=0:
            if L[S[i]-N]==1:
                ans+=1
    print(ans)
    N=int(input())