for b in range(int(input())):
    s=int(input())
    N=[]
    for i in range(s-1):
        N.append(int(input()))
    Nsum=[0]*s
    for i in range(1,s):
        Nsum[i]=Nsum[i-1]+N[i-1]
    ans=-1000000
    for i in range(s-1):
        for j in range(i+1,s):
            if Nsum[j]-Nsum[i]>ans:
                ans=Nsum[j]-Nsum[i]
                ans_section=[i+1,j+1]
            elif Nsum[j]-Nsum[i]==ans and j-i>ans_section[1]-ans_section[0]:
                ans_section=[i+1,j+1]
    #print(Nsum)
    if ans<0:
        print("Route",b+1,"has no nice parts")
    else:
        print("The nicest part of route",b+1,"is between stops",ans_section[0],"and",ans_section[1])