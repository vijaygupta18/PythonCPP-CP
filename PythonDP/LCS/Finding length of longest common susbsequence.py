
def recmemo(s1,s2,n,m):
    if n==0 or m==0:
        return 0
    if mem[n][m]!=-1:
        return mem[n][m]
    if s1[n-1]==s2[m-1]:
        mem[n][m]=1+recmemo(s1,s2,n-1,m-1)
    else:
        mem[n][m]=max(recmemo(s1,s2,n,m-1),recmemo(s1,s2,n-1,m))
        return mem[n][m]



def top_down(s1,s2,n,m):
    dp=[[0 for x in range(n+2)] for x in range(m+2)]
    for x in range(n+1):
        for y in range(m+1):
            if x==0 or y==0:
                dp[x][y]=0
            elif s1[x-1]==s2[y-1]:
                dp[x][y]=1+dp[x-1][y-1]
            else:
                dp[x][y]= max(dp[x-1][y],dp[x][y-1])
    return dp[x][y]        


s1 = "abcdgh"
s2 = "abedfhr"
b=top_down(s1,s2,len(s1),len(s2))
print(b)
