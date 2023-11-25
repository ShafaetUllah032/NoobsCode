#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    string s;
    int n,m;
    int cnt;
    for(int ii=0;ii<t;ii++)
    {
        cin>>n>>m;
        cin>>s;
        cnt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='B')
            {
                i=min(i+m-1,n-1);
                cnt=cnt+1;
            }
        }
        cout<<cnt<<endl;
    }
}
