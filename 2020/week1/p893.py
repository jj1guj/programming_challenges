import datetime
L=list(map(int,input().split()))
while 1:
    if sum(L)==0:
        break
    a=datetime.datetime(L[3],L[2],L[1],0,0,0)+datetime.timedelta(days=L[0])
    print(a.day,a.month,a.year)
    L=list(map(int,input().split()))