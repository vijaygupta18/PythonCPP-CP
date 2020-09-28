def bs(l,h,val,arr):
    while l<=h:
        mid=l+h//2
        if arr[mid]<val:
            l=mid+1
        elif arr[mid]>val:
            h=mid-1
        else:
            return mid
    return -1        
    
n=int(input())
arr=[int(x) for x in input().split()][:n]
val=int(input('enter value'))
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
