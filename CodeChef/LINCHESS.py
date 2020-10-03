# cook your dish here
for x in range(int(input())):
    n,k=map(int,input().split())
    a=map(int,input().split())
    b=[]
    for i in a:
        if k%i==0:
            b.append(i)
    if len(b)==0:
        print('-1')
    else:
        b=sorted(b)
        c=len(b)
        print(b[c-1])
            