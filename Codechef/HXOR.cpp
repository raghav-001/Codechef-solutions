#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int t,n,x,i,p,number;
    int flag=0;
    cin>>t;
    for (int r=0;r<t;r++)
    {
        cin>>n>>x;
        long long int a[n];
        for(long long int i=0;i<n;i++)
        cin>>a[i];
        i=0;
        while(x>0 && i<n-1){
            p=log2(a[i]);
            number=pow(2,p);
            a[i]=a[i]^number;
            flag=0;
            for(long long int j=i+1;j<n;j++){
                if((a[j]^number) < a[j])
                {
                    a[j]=a[j]^number;
                    flag=1;
                    break;
                }
            }
            if(!flag) a[n-1]^=number;
            
            while(a[i]<=0) i++;
            x--;
        }
        if(x>0)
        {
            if(n==2 && x%2>0)
            {
                a[n-2] ^=1;
                a[n-1] ^=1;
            }
        }
        for(long long int i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
    }
}
