t=int(input())
for i in range(t):
    n=int(input())
    a=input().split()
    gas=0
    dist=0
    for j in range(len(a)):
        a[j]=int(a[j])
    for k in range(len(a)):
        if k==0: gas+=a[k]
        else:
            if a[k]>0:
                gas+=a[k]-1
                dist+=1
            else:
                gas-=1
                dist+=1
        if gas==0: break
    print(dist+gas)
    
                
                
        