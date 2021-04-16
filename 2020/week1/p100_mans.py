#import matplotlib.pyplot as plt
L=[]
N=10000
for i in range(N):
    ans=1
    n=i+1
    if n%2==1:
        while n!=1:
            if n%2==1:
                n=3*n+1
            else:
                n//=2
            ans+=1
        L.append(ans)

print(L)
#plt.plot(L)
#plt.show()
#print("[",",".join(map(str,L)),"]")