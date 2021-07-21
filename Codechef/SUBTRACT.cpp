/*if the last digit of the number is non-zero, he decreases the number by one.
if the last digit of the number is zero, he divides the number by 10.*/
#include <iostream>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n>>k;
    if (n/10<0) n-=k;
    else
    {
            while (k--)
        {
            if (n%10!=0) n-=1;
            else n/=10;
        }
    }
    cout<<n;
}