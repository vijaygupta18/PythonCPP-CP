#code
for x in range(int(input())):
    n=int(input())
    a=[int(x) for x in input().split()]
    b=[]
    c=[]
    for i in range(n):
        if a[i]<0:
            b.append(a[i])
        else:
            c.append(a[i])
            
    a=c+b
    print(*a)
