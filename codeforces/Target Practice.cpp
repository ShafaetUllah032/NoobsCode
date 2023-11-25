#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int cnt;
    int r,c;
    char ar[11][11];
    for(int tt=0; tt<t; tt++)
    {
        cnt=0;
        for(int i=1; i<=10; i++)
        {
            for(int j=1; j<=10; j++)
            {
                cin>>ar[i][j];

                if(ar[i][j]=='X')
                {
                    r=i;
                    c=j;

                    if(r>5){
                         r=(10-r+1);
                    }
                    if(c>5){
                        c=(10-c+1);
                    }

                    cnt=cnt+min(r,c);
                    //cout<<r<<" "<<c<<endl;
                }

            }
        }
        cout<<cnt<<endl;
    }
}
