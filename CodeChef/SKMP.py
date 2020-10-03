import copy
for x in range(int(input())):
    s=list(input())
    p=list(input())
    for char in p:
        s.remove(char)
    s=sorted(s)
    news=copy.deepcopy(s)
    news.append(p[0])
    news=sorted(news,reverse=True)
    if p[0] not in s:
        print(''.join(s[0:len(news)-news.index(p[0])-1])+''.join(p)+''.join(s[len(news)-news.index(p[0])-1:]))
    else:
        an=''.join(s[0:s.index(p[0])])+''.join(p)+''.join(s[s.index(p[0]):])
        print(min(an,''.join(s[0:len(news)-news.index(p[0])-1])+''.join(p)+''.join(s[len(news)-news.index(p[0])-1:])))