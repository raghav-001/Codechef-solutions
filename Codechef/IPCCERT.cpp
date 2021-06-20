#include<iostream>
#include<numeric>
using namespace std;
long long int arraySum(long long int a[],long long int n)  
{ 
    long long int initial_sum=0;  
    return accumulate(a,a+n,initial_sum); 
} 
int main()
{
    long long int n,m,k,q,count=0;
    cin>>n>>m>>k;
    long long int a[k];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<k;j++)
        cin>>a[j];
        cin>>q;
        long long int sum=arraySum(a,k);
        if (sum>=m && q<=10) count+=1;
    }
    cout<<count;
    
}