# cook your dish here
for t in range(int(input())):
    n,x,p,k=map(int,input().split())
    a=[int(x) for x in input().split()][:n]
    a=sorted(a)
    if a[p-1]<x and p<k:
        print('-1')
    elif a[p-1]>x and p>k:
        print('-1')
    elif(p==k):
        if a[k-1]==x:
            print('0')
        elif x>a[k-1]:
            d=0
            for i in range(k-1,n):
                if x>a[i]:
                    d+=1
                else:
                    break
            print(d)    
        elif x<a[k-1]:
            d=0
            for i in range(p):
                if x<a[i]:
                    d+=1
            print(d)        
    else:
        if x>=a[k-1]:
            d=0
            for i in range(p-1,n):
                if x>a[i]:
                    d+=1
                else:
                    break
            print(d)    
        elif x<a[k-1]:
            d=0
            for i in range(p):
                if x<a[i]:
                    d+=1
            print(d)  
        
            
        
    
   
