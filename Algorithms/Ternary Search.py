# cook your dish here
def ts(l,h,val,arr):
    if h>=1:
        mid1=l+(l+h)//3
        mid2=h-(h-l)//3
        if val==arr[mid1]:
            return mid1
        if val==arr[mid2]:
            return mid2
        if val<arr[mid1]:
            return ts(l,mid1-1,val,arr)
        elif val>arr[mid2]:
            return ts(mid2+1,h,val,arr)
        else:
            return ts(mid1+1,mid2-1,val,arr)
    return -1   
    
n=int(input())
arr=[int(x) for x in input().split()][:n]
val=int(input())
if n==1:
    if val==arr[0]:
        print("Item found at index ",n-1)
    else:
        print("item not found")
else:        
    b=ts(0,n-1,val,arr)
    if b==-1:
        print("item not found")
    else:
        print("Item found at index ",b)
