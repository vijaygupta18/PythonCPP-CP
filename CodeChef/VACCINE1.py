# cook your dish here
d1,v1,d2,v2,p=map(int,input().split())
c=0
if d2>d1:
    c=d1-1
    while(d1<d2):
        p-=v1
        c+=1
        d1+=1
        if p<=0:
            break
        
    if p%(v2+v1)==0 and p>0:
        c+=p//(v2+v1)
            
    else:
        if p>0:
            c+=(p//(v1+v2))+1
            
    print(c)        
            
elif(d2<d1):

    c=d2-1
    while d2<d1:
        p-=v2
        d2+=1
        c+=1
        if p<=0:
            break
    if p%(v2+v1)==0 and p>0:
        c+=p//(v2+v1)
    else:
        if p>0:
            c+=(p//(v1+v2))+1
    print(c)        
elif(d2==d1):
    if p%(v2+v1)==0:
        c+=p//(v2+v1)
    else:
        c+=(p//(v1+v2))+1
    print(c+d1-1)
    
