#include <iostream>
using namespace std;
int minimum(int x,int y)
{
    if (x<y) return x;
    return y;
}
int main()
{
    int d1,v1,d2,v2,p;
    cin>>d1>>v1>>d2>>v2>>p;
    int days=0;
    int vaccine=0;
    int flag=0;
    int x=minimum(d1,d2);
    if (x!=1)
    {
        while (days<x-1) days++;
    }
    while (vaccine<p)
    {
        if (d1<d2)
        {
            while (d1<d2)
            {
                vaccine+=v1;
                if (vaccine>p) {flag=1; break;}
                d1++;
                days++;
            }
        }
        else if (d1>d2)
        {
            while (d2<d1)
            {
                vaccine+=v2;
                if (vaccine>p) {flag=1; break;}
                d2++;
                days++;
            }
        }
        else 
        {
            vaccine+=v1+v2;
            days++;
        }
        if (flag==1) break;
    }
    cout<<days;
}