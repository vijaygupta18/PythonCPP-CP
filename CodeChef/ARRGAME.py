def zz(lis,n):
    global lo
    ou = []
    ns = 0
    for i in range(n):
        if lis[i] == 0:
            ns += 1
            ou.append(ns)
        else:
            if ns!=0:
               lo+=[ns]            
            ns = 0
            ou.append(ns)
            
    return ou

for i in range(int(input())):
  n=int(input())
  size=[]
  lo=[]
  size+=input().split()
  for z in range(n):
      size[z]=int(size[z])

  zz(size,n)
  lo.sort()
  flag=0
  if lo==[]:
      print("No")
      flag+=1
  if flag==0:    
    if lo[-1]%2==0:
           print("No")
           flag+=1
  
  ssss=set(lo)
  tt=tuple(lo)
  if flag==0:
   for k in range(len(lo)-1,-1,-1):
      item=lo[k]
      if (item%2)!=0:
          if tt.count(item)>1:
              print("No")
              flag+=1
              break
          num=(item+1)//2
          co=0
          for i in range(num,item):
              if i in ssss:
                  co+=1
          if co!=0:        
                  print("No")
                  flag+=1
                  break
          else:
              print("Yes")
              flag+=1
              break