#include <stdio.h>

int add(int *a,int *b,int *sum)
{
    *sum=*a+*b;
    return *sum;
}

int main()
{
    int a,b,sum;

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    add(&a,&b,&sum);

    printf("Sum=%d",sum);

    return 0;
}