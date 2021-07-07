#include<iostream>
#include<numeric>
using namespace std;
int arraySum(int a[], int n)  
{ 
    int initial_sum =0;  
    return accumulate(a, a+n, initial_sum); 
} 
  
int main()
{
    int t,n,k;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        cin>>n>>k;
        int a[n+3]={0};
        int count=0;
        if (k==n)
        {
            for (int j=1;j<=n;j++) a[j]=j;
        }
        else
        {
            for (int p=1;p<=n;p+=2)
            {
                if (count<k) {a[p]=p; count++; }
                else a[p]=p*-1;
            }
            count=0;
            for (int p=2;p<=n;p+=2)
            {
                if (count<n-k) {a[p]=p*-1; count++; }
                else a[p]=p;
            }
        }
        for (int z=1;z<=n;z++) cout<<a[z]<<' ';
        cout<<endl;
        
    }
}