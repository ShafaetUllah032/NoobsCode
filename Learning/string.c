#include<stdio.h>
#include<string.h>

int main()
{
    char name[10] = {'a', 'b', 'c', 'd'};
    printf("%s\n", name);

    gets(name);

    printf("%s\n", name);



    char *s="welcome";
    for(int i=0;s[i]!='\0';i++)
    {
        printf("%d ",i);
    }

    return 0;
}
