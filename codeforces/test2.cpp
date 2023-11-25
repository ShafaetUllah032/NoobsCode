#include<bits/stdc++.h>

using namespace std;

int main()
{

    string s="ab#c",t="ad#c";

    stack<char>stk;

        for(int i=0;i<s.size();i++)
        {
            stk.push(s[i]);
        }
        s.clear();
        int flag=0;
        char x;
        while(!stk.empty())
        {
            x=stk.top();
            stk.pop();
            if(x=='#')
            {
                flag++;
            }
            else {
                if(flag)
                {
                    flag--;

                }
                else
                {
                    s=s+x;
                }
            }
        }
        cout<<s<<endl;
        for(int i=0;i<t.size();i++)
        {
            stk.push(t[i]);
        }
        t.clear();
        flag=0;
        x;
        while(!stk.empty())
        {
            x=stk.top();
            stk.pop();
            if(x=='#')
            {
                flag++;
            }
            else {
                if(flag)
                {
                    flag--;

                }
                else
                {
                    t=t+x;
                }
            }
        }
        cout<<t<<endl;

        if(s==t)
        {
            return true;
        }
        return false;
}
