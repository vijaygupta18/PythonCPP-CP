def maxSubArraySum(a,size):
    x =a[0] 
    y = a[0] 
    for i in range(1,size): 
        y = max(a[i], y + a[i]) 
        x = max(x,y) 
    return x
