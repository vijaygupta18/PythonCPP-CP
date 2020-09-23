# cook your dish here
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
ans=bs(0,n-1,val,arr)
if ans==-1:
    print("element not found")
else:
    
    print("Searched element is found at index",ans)
