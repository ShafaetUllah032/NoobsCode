
#include<bits/stdc++.h>
using namespace std;


int main()
{

    int t;
    cin>>t;
    string s;
    int cnt=0;
    for(int i=0; i<t; i++)
    {

        cnt=0;
        cin>>s;

        if(s[0]=='a')
        {
            cnt+=1;
        }
        if(s[1]=='b')
        {
            cnt+=1;
        }
        if(s[2]=='c')
        {
            cnt+=1;
        }


        if(cnt>=1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
