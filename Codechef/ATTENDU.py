t=int(input())
for i in range(t):
    n=int(input())
    s=input()
    x=s.count('1')
    y=120-n+x
    if (y/120*100)>=75: print("YES")
    else: print("NO")
    