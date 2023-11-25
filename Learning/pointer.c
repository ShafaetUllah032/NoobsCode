/***

main memory:
    code-section
    heap
    stack

    program can't directly access heap that's why we need pointer to access heap.
    and also access outside resources of the program by pointer .
    and also useful for parameter passing .

    data variable int a=10;
    address variable int *p;

***/

#include<stdio.h>

struct Rectangle
{
    int length;
    int breadth;

};

int main()
{
    struct Rectangle r={10,5};

    struct Rectangle *p=&r;

    printf("%d\n", p->length);


    struct Rectangle *po;
    po=(struct Rectangle*)malloc(sizeof(struct Rectangle));

    po->length=20;
    printf("%d ",po->length);



    return 0;
}
