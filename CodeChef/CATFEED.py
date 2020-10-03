# cook your dish here
for _ in range(int(input())):
    n,m=map(int,input().split())
    x=list(map(int,input().split()))
    y=list()
   
    for k in range(0,m,n):
        y.append(x[k:k+n])
    c=0
    l1=len(y)
    for i in range(l1):
        l2=len(y[i])
        for j in range(l2):
            if (y[i].count(y[i][j]))>1:
                c=c+1
    if c>0:
        print("NO")
    else:
        print("YES")