# cook your dish here
for x in range(int(input())):
    a,b=map(int,input().split())
    c=list(input().split())
    z=""
    for x in c:
        if int(x)%b==0:
            z=z+'1'
        else:
            z=z+'0'
    print(z)        
        