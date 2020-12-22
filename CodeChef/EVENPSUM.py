# cook your dish here
#submitting fresh
for x in range(int(input())):
    a,b=map(int,input().split())
    ev1=a//2
    ev2=b//2
    od1=a-ev1
    od2=b-ev2
    if a==1 and b==1:
        print('1')
    elif a==1 and b>1:
        print(od2)
    elif b==1 and a>1:
        print(od1)
    else:
        print((ev1*ev2)+(od1*od2))
    
