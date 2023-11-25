#include<stdio.h>
#include<iostream>
//#include<struct.h>

using namespace std;
struct complx{

    int real;
    int img;

    ///a+ib=c
};

struct card{

    int face;
    int shape;
    int color;
};

struct student{

    int roll;
    char names[25];
    char dept[10];
    char address[50];
};


int main()
{

    complx data={2,3}; ///difining and intialization


    printf("%d ",data.real);
}
