#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    long int d,n;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        cin>>n>>d;
        int age[n];
        int pos1=0,pos2=0;
        for (int j=0;j<n;j++)
        {
            cin>>age[j];
            if (age[j]>=80 || age[j]<=9)  pos1++; 
            else pos2++; 
            
        }
        if (d==1) cout<<n<<endl;
        else
        {   
            int len=0; long int days=0;
            while (len<pos1)
            {   int flag=0; long int c=0;
                while (c<d)
                {
                    len++;
                    if (len==pos1) { flag=1; break; }
                    c++;
                }
                days++;
                if (flag==1) break;
            }
            len=0; 
            while (len<pos2)
            {
                int flag=0; long int c=0;
                while (c<d)
                {
                    len++;
                    if (len==pos2) { flag=1; break; }
                    c++;
                }
                days++;
                if (flag==1) break;
            }
            cout<<days<<endl;
            
        }
    }
}