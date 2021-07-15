#include <iostream>
using namespace std;
int fib(int n)
{
    long long int f[n+2];  
    f[0] = 0; 
    f[1] = 1; 
    for(int i=2;i<= n;i++) 
    { 
       f[i] =f[i - 1]+f[i - 2]; 
    } 
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<=i;j++)
        {
            cout<<f[j];
        }
        cout<<endl;
    }
}
int main()
{
    int t,n;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        cin>>n;
        fib(n);
    }
}