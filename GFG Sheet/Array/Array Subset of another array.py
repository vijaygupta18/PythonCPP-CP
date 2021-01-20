#code https://practice.geeksforgeeks.org/problems/array-subset-of-another-array/0#
for _ in range(int(input())):
    m,n=map(int,input().split())
    a=set(int(x) for x in input().split())
    b=set(int(x) for x in input().split())
    c= set(a & b)
    if c==b:
        print('Yes')
    else:
        print("No")
        
