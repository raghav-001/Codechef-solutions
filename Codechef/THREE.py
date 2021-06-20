import math
t=int(input())
for i in range(t):
    s=input()
    x=list(set(s))
    c=0
    for j in range(len(x)):
        c+=math.floor(s.count(x[j])/2)
    print(min(c,math.floor(len(s)/3)))
    