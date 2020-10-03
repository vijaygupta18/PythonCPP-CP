# cook your dish here
for t in range(int(input())):
    a=[]
    c=0
    m=0
    d=0
    def sum(n):
        tot=0
        while(n>0):
            dig=n%10
            tot=tot+dig
            n=n//10
        return(tot)
    for n in range(int(input())):
        b=list(input().split())
        if sum(int(b[0]))>(sum(int(b[1]))):
            c=c+1
        elif sum(int(b[0]))<(sum(int(b[1]))):
            m=m+1
        elif sum(int(b[0]))==(sum(int(b[1]))):
            c=c+1
            m=m+1
    if(c>m):
        print('0',c)
    elif(m>c):
        print("1",m)
    elif(c==m):
        print("2",c)
    