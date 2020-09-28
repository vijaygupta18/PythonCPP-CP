def qsort(arr):
    if len(arr)<=1:
        return arr
    pivot=arr[0]
    arr.remove(arr[0])
    left,right=[],[]
    
    for x in arr:
        if x<pivot:
            left.append(x)
        else:
            right.append(x)
    return qsort(left)+[pivot]+qsort(right)
    
arr=[4,46,2,56,346,7]
b=qsort(arr)
print(*b)
