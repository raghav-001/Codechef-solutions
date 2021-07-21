t=int(input())
for i in range(t):
    car=input()
    c1=0;c2=0
    for j in range(0,len(car)):
        if (ord(car[j])-48)%2==0 and ord(car[j])-48>0: c1+=ord(car[j])-48
        elif ord(car[j])-48>0: c2+=ord(car[j])-48
    if c1%4==0 or c2%3==0: print("Yes")
    else: print("No")