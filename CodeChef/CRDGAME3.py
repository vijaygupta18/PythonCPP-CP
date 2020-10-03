for x in range(int(input())):
    c,r=map(int,input().split())
    a=0
    b=0
    y=0
    z=0
    if (c<10 and r<10):
        print('1 1')
    if (c>9 and r<10):
        print('1 1')
    if (c<10 and r>9):
        print('0 1')
    if(c>9 and r>9):
        y=(c//9)+1
        z=(r//9)+1
        if(c%9==0):
            y=y-1
        if(r%9==0):
            z=z-1
        if(c>r):
            print('1',z)
        if(c<r):
            print('0',y)
        if(z==r):
            a=(c-y*9)
            b=(r-z*9)
            if(a>=b):
                print('1',z)
            if(a<b):
                print('0',y)

  