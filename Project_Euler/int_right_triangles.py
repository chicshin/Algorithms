# Project Euler problem 39 <INTEGER RIGHT TRIANGLES>

sols = [0 for _ in range(1001)]

for x in range(1, 500):
    for y in range(x,501-x):
        z = (x**2+y**2)**0.5
        if z-int(z)==0:
            sols[int(x+y+z)]+=1
print(sols)

print(sols.index(max(sols)))

##lists = []
##for b in range(1,500):
##    for a in range(b, 501-b):
##        c = math.sqrt((a**2) + (b**2))
##        threeSides = a + b + c
##        if c % 1 == 0 and threeSides < 1001:
##            lists.append(int(threeSides))
###print(lists)
##
##for x in lists:
##    cnt = lists.count(x)
##    print(x,cnt)
