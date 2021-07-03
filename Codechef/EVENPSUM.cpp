#include<iostream>
using namespace std;
int main()
{
    int t;
    long int a,b;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        cin>>a>>b;
        long int pos1=0,pos2=0,pos3=0,pos4=0;
        if (a%2!=0) pos1=(a+1)/2;
        else  pos1=a/2;
        if (b%2!=0) pos3=(b+1)/2;
        else pos3=b/2;
        pos2=a/2;pos4=b/2;
        cout<<pos1*pos3+pos2*pos4<<endl;
    }
}
