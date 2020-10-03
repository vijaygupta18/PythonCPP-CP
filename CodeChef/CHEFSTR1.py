# cook your dish here
for x in range(int(input())):
    n=int(input())
    a=list(input().split())
    s=0
    for i in range(n):
        if i<n-1:
            s=s+abs(int(a[i+1])-int(a[i]))-1
        
    print(s)    