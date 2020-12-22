# cook your dish here
#ezeaf
import math
for x in range(int(input())):
    n,d=map(int,input().split())
    a=[int(x) for x in input().split()][:n]
    inn=0
    he=0
    for x in a:
        if x<=9 or x>=80:
            inn+=1
        else:
            he+=1
    print(int(math.ceil(inn/d))+int(math.ceil(he/d)))      
