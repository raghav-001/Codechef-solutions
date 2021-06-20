#include <iostream>
using namespace std;
int main()
{
    int t;
    long long int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int a[n];
        long long int x=0,y=0;
        for (long long int i=0;i<n;i++) 
        {
            cin>>a[i];
            if (a[i]%2!=0) x++;
            else y++;
        }
        cout<<x*y<<endl;
        
    }
}