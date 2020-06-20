mod=131071
mod_all=[pow(2,i,mod) for i in range(11000)]

while True:
    try:
        S=""
        s=input()
        while s[-1]!="#":
            S+=s
            s=input()
        S+=s
        S=S[::-1]
        S=S[1:]
        slen=len(S)
        ans=0
        for i in range(slen):
            ans+=int(S[i])*mod_all[i]
            ans%=mod
        
        if ans%mod==0:
            print("YES")
        else:
            print("NO")
        
    except EOFError: break