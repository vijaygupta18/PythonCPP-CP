t=int(input())
for x in range(t):
    n=int(input())
    a=[]
    for j in range(n):
        b=int(input())
        a.append(b)
    if(t*n<=2*10**6):    
        print(max(a))    