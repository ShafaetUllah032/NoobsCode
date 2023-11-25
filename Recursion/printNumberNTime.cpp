#include<bits/stdc++.h>

using namespace std;


int fun(int i,int n)
{
    if(i>n)
    {
        return 0;
    }
    printf("Titu\n");
    fun(i+1,n);

}
int main()
{
    int n;
    cin>>n;
    fun(1,n);

    return 0;
}
