#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<char>chars={'a','a','b','c','c','b','c'};
    int ar[70];
    sort(chars.begin(),chars.end());
    int flag=0;
    int x=0;
    for(int i=0; (i+1)<chars.size(); i++)
    {
        cout<<chars[i]<<" ";
        if(chars[i+1]!=chars[i])
        {
            chars[x]=(i-flag+1);
            flag=i;
            x+=1;
        }
    }
    ar[x]=(chars.size()-flag+1);
    flag=x;
    for(int i=0; i<=x; i++)
    {
        if(ar[i]<10)
        {
            flag+=1;
        }
        else if(ar[i]<100)
        {
            flag+=2;
        }
        else if(ar[i]<1000)
        {
            flag+=3;
        }
        else if(ar[i]<10000)
        {
            flag+=4;
        }

    }
    cout<<flag<<endl;

}
