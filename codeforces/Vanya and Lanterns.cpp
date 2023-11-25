#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a,l;
    cin>>a>>l;

    int ar[a+5];
    for(int i=0;i<a;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+a);
    int mx=ar[0]-0;
    mx=mx*2;
    int d=0;
    for(int i=0;i<a;i++)
    {
        mx=max(mx,ar[i]-d);
        d=ar[i];
    }
    mx=max(mx,(l-d)*2);
    cout << fixed << setprecision(9) << double((mx*1.0)/2.0)<< endl;



}
