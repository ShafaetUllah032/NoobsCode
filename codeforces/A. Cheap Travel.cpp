#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,m,a,b;
    cin>>n>>m>>a>>b;
    cout<<min(min((n*a),(((n%m)*a)+((n/m)*b))),((n+m-1)/m)*b)<<endl;
}
