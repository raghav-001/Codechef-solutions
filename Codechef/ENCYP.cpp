#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    while (t--)
    {
        cin>>s;
        int a[5]={98, 57, 31, 45, 46};
        for (int i=0;i<s.length();i++)
        cout<<char((s[i]-65+a[i])%26+65);
        cout<<endl;
     
    }
}