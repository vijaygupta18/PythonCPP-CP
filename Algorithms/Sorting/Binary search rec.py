def bs(l,h,val,arr):
    if h>=1:
        mid=(l+h)//2
        if val==arr[mid]:
            return mid
        if val<arr[mid]:
            return bs(l,mid-1,val,arr)
        elif val>arr[mid]:
            return bs(mid+1,h,val,arr)
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
    b=bs(0,n-1,val,arr)
    if b==-1:
        print("item not found")
    else:
        print("Item found at index ",b)
