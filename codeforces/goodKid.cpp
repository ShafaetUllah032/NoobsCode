#include<bits/stdc++.h>
using namespace std;


int main()
{

    int t;
    cin>>t;
    int n;

    int mn,p,f;
    int ar[10];
    for(int j=0;j<t;j++)
    {
        mn=INT_MAX;
        p=1;
        f=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]==0 && f==0)
            {
                ar[i]=1;
                f+=1;
            }
            p=p*ar[i];
            mn=min(mn,ar[i]);
        }
        if(p==0 || f==1)
        {
            cout<<p<<endl;
        }
        else{
           cout<<((p/mn)*(mn+1))<<endl;

        }

    }
}
