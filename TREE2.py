# cook your dish here
for x in range(int(input())):
    n=int(input())
    a=[int(x) for x in input().split()][:n]
    c=0
    a=set(a)
    if 0 in a:
        print(len(a)-1)
    else:    
        print(len(a))
    
        
        
        