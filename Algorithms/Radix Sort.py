def radix_sort(arr):
    radix=10
    place=1
    max_dig=max(arr)
    while place<max_dig:
        newarr=[list() for x in range(radix)]
        for x in arr:
            temp=int((x/place)%radix)
            newarr[temp].append(x)
        a=0 
        for i in range(radix):
            new=newarr[i]
            for j in new:
                arr[a]=j
                a+=1
        place=place*10
    return arr    
        
    
arr=[4,46,2,56,346,7]
b=radix_sort(arr)
print(*b)
