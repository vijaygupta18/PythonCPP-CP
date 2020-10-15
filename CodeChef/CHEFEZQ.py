# cook your dish here
# cook your dish here
for x in range(int(input())):
    n,k=map(int,input().split())
    a=[int(x) for x in input().split()][:n]
    c=0
    d=0
    for x in range(n):
        c+=1
        d+=a[x]-k
        if d<0:
            print(x+1)
            break
        if x==n-1:
            print(c+(d//k)+1)
            
        
         
        
            
        
    
