# cook your dish here
def IS(a,n):
    for i in range(1,n):
        m=i
        temp=a[m]
        while(m>0 and temp<a[m-1]):
            a[m]=a[m-1]
            m=m-1
        a[m]=temp   
                
    return a
    
    
    
n=int(input())
arr=[int(x) for x in input().split()][:n]
b=IS(arr,n)
print(*b)
