# cook your dish here
# cook your dish here
t=int(input())
for x in range(t):
    a,b=map(int,input().split())
    e=[6,2,5,5,4,5,6,3,7,6]
    d=0
    c=str(a+b)
    for x in c:
        x=int(x)
        d=d+e[x]
    print(d)    
    
    
    
    
