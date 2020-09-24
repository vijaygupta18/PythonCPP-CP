# cook your dish here
def ss(a,n):
    for i in range(n-1):
        m=i
        for j in range(i+1,n):
            if a[j]<a[m]:
                m=j
        temp=a[i]
        a[i]=a[m]
        a[m]=temp        
                
    return a
    
    
    
n=int(input())
arr=[int(x) for x in input().split()][:n]
b=ss(arr,n)
print(*b)
