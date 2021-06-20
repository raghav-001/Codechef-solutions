#include<iostream>
#include<algorithm>
using namespace std;
struct Car{
    long int fuel,cost;
    Car(){}
    Car(long x,long y)
    {
        fuel=x;
        cost=y;
    }
};
bool sorter(struct Car a,struct Car b)
{
    return a.cost<b.cost;
}
long int min(long int a,long int b)
{
    if (a>b) return b;
    return a;
}
long int mincost(struct Car arr[],long int n)
{
    sort(arr,arr+n,sorter);
    long int distleft=n;
    long int cost=0;
    long int dist=0;
    for (int i=0;i<n;i++)
    {
        dist=min(arr[i].fuel,distleft);
        distleft-=dist;
        cost+=dist*arr[i].cost;
        if (distleft==0) break;
    }
    return cost;
}
int main()
{
    int t;long int n;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        cin>>n;
        long int fuel[n],cost[n];
        for (int j=0;j<n;j++) cin>>fuel[j];
        for (int k=0;k<n;k++) cin>>cost[k];
        Car *arr=new Car[n];
        for (int z=0;z<n;z++)
        {
            arr[z]=Car(fuel[z],cost[z]);
        }
        cout<<mincost(arr,n)<<endl;
    }
    
    
}