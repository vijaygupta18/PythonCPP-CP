# cook your dish here
# cook your dish here
for x in range(int(input())):
    n=int(input())
    arr=[int(x) for x in input().split()][:n]
    x=[]
    for y in range(1,11):
        x.append(arr.count(y))
    z=[]
    for i in range(len(x)):
        if x[i]!=0:
            z.append(x[i])
    z=sorted(z)
    im=0
    value=100000 
    diction=dict()
    time=[]
    for i in z:
        if i not in time:
            diction[i]=z.count(i)
            im=max(im,z.count(i))
            time.append(i)
           
    for i in diction:
        if diction[i]==im:
            value=min(value,i)
    print(value)        
    
    