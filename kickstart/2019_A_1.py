"""
Kickstart Round A #1 2019
"""

t = int(input())
for i in range(1, t+1):
    n, p = [int(s) for s in input().split(" ")]
    d = [int(x) for x in input().split(" ")]
    dd = sorted(d,reverse = True)
    soFar = []
    for l in range(p-1):
        sums = 0
        biggest = dd[l]
        if n == p:
            for g in range(1,p):
                current = dd[0] - dd[g]
                sums += current
        else:
            for k in range(l,l+(p-1)):
                current = biggest - dd[k+1]
                sums += current
        soFar.append(sums)
        minimum = min(soFar)

    print("Case #{}: {}".format(i, minimum))


# Solution 2)
#
# t=int(input())
# for k in range(t):
#     n,p = map(int, input().split())
#     l = list(map(int, input().split()))
#     l=sorted(l, reverse=True)
#     c=[]
#     s=sum(l[1:p])
#     for i in range(0,n-p+1):
#         x=l[i]
#         cc=x*(p-1) - s
#         print(i,x,s)
#         c.append(cc)
#         if i!=n-p:
#             s-=l[i+1]
#             s+=l[i+p]
#             print(i,s)
#     print("Case #"+str(k+1)+": "+str(min(c)))
