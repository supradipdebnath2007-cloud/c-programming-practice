#include <stdio.h>
int main()
{
    float a,r,t,i;

    printf("Enter principal: ");
    scanf("%f",&a);

    printf("Enter rate: ");
    scanf("%f",&r);

    printf("Enter time: ");
    scanf("%f",&t);

    i=(a*r*t)/100;

    printf("Simple Interest=%.2f",i);

    return 0;
}