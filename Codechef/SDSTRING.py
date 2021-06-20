t=int(input())
for i in range(t):
    a=input()
    if len(a)%2!=0 or a.count('0')==len(a) or a.count('1')==len(a): print(-1)
    else:
        print(abs(a.count('0')-a.count('1'))//2)
        