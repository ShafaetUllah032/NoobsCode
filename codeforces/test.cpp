#include<bits/stdc++.h>

using namespace std;

int main ( )
{
    long long int n=12;
    long long int val=1;
    val= (val << 31);

    long long int sum=0;

    long long int x,y,z;
    x=1;

    for(int i=1;i<32;i++)
    {
        z=(x&n);
        if(z>1)
        {
            z=1;
        }
        //cout<<z<<" ";
        sum += (z*val);
        val = (val>>1);
        x= (x<<1);
    }

    cout<<sum<<endl;
}
