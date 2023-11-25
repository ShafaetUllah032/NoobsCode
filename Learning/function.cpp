#include<bits/stdc++.h>
using namespace std;



void fun(int A[],int n)
{

    A[0]=25;
}


void swp(int *x,int *y)
{

    int temp;

    temp=*x;
    *x=*y;
    *y=temp;
}


int main()
{

    int a,b;
    cin>>a>>b;

    swp(&a,&b);

    printf("%d %d\n",a,b);



    int A[5]={2,3,4,5,6};

    fun(A,5);

    for(int i=0;i<4;i++)
    {
        cout<<A[i]<<" ";
    }

}
