N=int(input())
for n in range(N):
    tname=input()
    tnumber=int(input())
    T=[]
    Tkey={}
    for t in range(tnumber):
        name=input()
        T.append([0,0,0,0,0,name])
        Tkey[name]=t
    G=int(input())
    for g in range(G):
        info=input()
        flg=0
        for i in range(len(info)):
            if info[i]=="#" and flg1==0:
                key=T[Tkey[info[:i]]]
                flg1=1
                lindx=i+1
            if info[i]=="@" and flg1==1:
                t1=int(info[lindx:i])
                