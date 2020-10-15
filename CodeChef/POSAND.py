# cook your dish here
import math
def count(number): 
    return int((math.log(number)//math.log(2)) + 1); 
def exp(x):
    return x > 0 and (x & (x - 1)) == 0
for x in range(int(input())):
    n=int(input())
    st=[2,3,1,5,4]
    if n==1:
        print('1')
    elif n==3:
        print("1 3 2")
    elif n==5:
        print(*st)
    else:
        b=exp(n)
        if b==True:
            print('-1')
        else:
            for x in range(6,n+1):
                st.append(x)
            if n>8:
                v=count(n)
                #print(v)
                for x in range(3,v):
                    st[2**x-1]=(2**x)+1
                    st[(2**x)]=2**x
                
            print(*st)    
                
            
            

            
            
        
