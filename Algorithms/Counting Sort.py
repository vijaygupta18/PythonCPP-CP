def counting_sort(arr):
    n=len(arr)
    max_value=max(arr)
    newarr=[0]*(max_value+1)
    ans=[]
    for x in range(n):
        newarr[arr[x]]=newarr[arr[x]]+1
    for i in range(max_value+1):
        temp=newarr[i]
        for j in range(temp):
            ans.append(i)
    return ans        
        
    
arr=[4,46,2,56,346,7]
b=counting_sort(arr)
print(*b)
