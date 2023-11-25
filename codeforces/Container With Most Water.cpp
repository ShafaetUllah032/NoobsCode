#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector<int>height= {2,3,4,5,18,17,6};
    int mx=0;
    int m,n;
    int x=height.size();
    for(int i=0; i<(x-1); i++)
    {
        for(int j=i+1; j<x; j++)
        {
            m=min(height[i],height[j]);
            n=j-i;
            cout<<i<<" "<<j<<" "<<height[i]<<" "<<height[j]<<" "<<m*n<<" "<<max(mx,(m*n))<<endl;

            mx=max(mx,(m*n));
        }
    }
    cout<<mx<<endl;
}
