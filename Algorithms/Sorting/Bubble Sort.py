def bs(a,n):
    for i in range(n):
        for j in range(n-i-1):
            if a[j]>a[j+1]:
                temp=a[j]
                a[j]=a[j+1]
                a[j+1]=temp
    return a
    
    
    
n=int(input())
arr=[int(x) for x in input().split()][:n]
b=bs(arr,n)
print(*b)
