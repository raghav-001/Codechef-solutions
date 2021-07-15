#include <iostream>
using namespace std;
long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b,a%b);
}
long long lcm(int a, int b)
{
    return (a / gcd(a, b))*b;
}
int main()
{
    long long int t,n,x,y;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        cin>>x>>y;
        if (x==y) cout<<0;
        else cout<<lcm(x,y)/x+lcm(x,y)/y-2;
        cout<<endl;
    }
}