# cook your dish here
# cook your dish here
for x in range(int(input())):
    n,k,x,y=map(int,input().split())
    if x==y or (x+k)%n==y:
        c=1
        print('YES')
    else:
        c=0
        f=(x+k)%n
        #print(f)
        while f!=x:
            f=(f+k)%n
            #-print(f)
            if f==y:
                c=1
                print('YES')
                break
    if c==0:
        print('NO')
    
        
         
        
            
        
    
