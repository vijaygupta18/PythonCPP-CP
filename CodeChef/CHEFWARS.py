# cook your dish here
for x in range(int(input())):
    h,p=map(int,input().split())
    while(p>0 and h>00):
        h=h-p
        p=p//2
    if(p>=h):
            print('1')
            
    elif(p<h):
        print('0')
              
            
    