#include <stdio.h>
int main()
{
    int a,b;
    int *p,*q;

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    p=&a;
    q=&b;

    if(*p>*q)
        printf("Maximum = %d",*p);
    else
        printf("Maximum = %d",*q);

    return 0;
}