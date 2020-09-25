# cook your dish here
def mergesort(arr):
    n=len(arr)
    if n>1:
        mid=n//2
        left=arr[:mid]
        right=arr[mid:]
        
        mergesort(left)
        mergesort(right)
        
        i=j=k=0
        
        while i<len(left) and j<len(right):
            if left[i]<right[j]:
                arr[k]=left[i]
                i+=1
            else:
                arr[k]=right[j]
                j+=1
            k+=1
        
        #checking for left part
        while i<len(left):
            arr[k]=left[i]
            i+=1
            k+=1
        
        while j<len(right):
            arr[k]=right[j]
            j+=1
            k+=1
            
         
    return arr   
        
arr = [14,46,43,27,57,41,45,21,70]
b=mergesort(arr)  

print(*b)
