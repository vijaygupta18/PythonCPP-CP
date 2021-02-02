def top_down(s1,s2,n,m):
    dp=[[0 for x in range(n+2)] for x in range(m+2)]
    for x in range(n+1):
        for y in range(m+1):
            if x==0 or y==0:
                dp[x][y]=0
            elif s1[x-1]==s2[y-1]:
                dp[x][y]=1+dp[x-1][y-1]
            else:
                dp[x][y]=0
    ans=0
    for x in dp:
        ans=max(ans,max(x))
    return ans    


s1 = "abcdgh"
s2 = "abedfhr"
b=top_down(s1,s2,len(s1),len(s2))
print(b)
