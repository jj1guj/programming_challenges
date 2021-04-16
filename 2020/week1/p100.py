memo=[-1 for i in range(1000000)]
memo[0]=1
N=100000

def collatz(k):
    if k>=1 and k<=N:
        if memo[k-1]!=-1:
            return memo[k-1]
    
    if k%2==1:
        res=collatz(3*k+1)+1
    else:
        res=collatz(k//2)+1
    
    if k>=1 and k<=N:
        memo[k-1]=res
    return res

while True:
    try:
        In=list(map(int,input().split()))
        a=In[0]
        b=In[1]
        ans=0
        for i in range(min(a,b),max(a,b)+1):
            ans=max(ans,collatz(i))
        print(a,b,ans)
    except EOFError: break