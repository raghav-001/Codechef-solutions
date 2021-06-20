#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,r;
    cin>>t;
    while(t--)
    {
        cin>>r;
        int x1,y1,x2,y2,x3,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        long double x,y,z;
        int a1=abs(x1-x2);
        int a2=abs(x2-x3);
        int a3=abs(x1-x3);
        
        int b1=abs(y1-y2);
        int b2=abs(y2-y3);
        int b3=abs(y1-y3);
        
        x=sqrt(a1*a1+b1*b1);
        y=sqrt(a2*a2+b2*b2);
        z=sqrt(a3*a3+b3*b3);

        if (x<=r && y<=r && z<=r) cout<<"yes";
        else if (x<=r && y<=r && z>r) cout<<"yes";
        else if (x<=r && y>r && z<=r) cout<<"yes";
        else if (x>r && y<=r && z<=r) cout<<"yes";
        else cout<<"no";
        cout<<endl;
        
    }
    
}