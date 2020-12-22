# cook your dish here
for x in range(int(input())):
    n,k=map(int,input().split())
    a=[]
    for x in range(1,n+1):
        a.append(-x)
    c=0  
    for i in range(0,n,2):
        if c==k:
            break
        a[i]=-a[i]
        
        c+=1
    v=n-1-n%2
    for j in range(v,0,-2):
        #print(x)
        if c==k:
            break
        a[j]=-a[j]
        c+=1
    print(*a)
        
        
