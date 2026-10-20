#include<stdio.h>
int swap(int *p,int *q)
{
	int temp= *p;
	*p=*q;
	*q=temp;
	return 0;
}
int main()
{
	int x,y;
	printf("Enter the values of:\n");
	printf("X=");
	scanf("%d",&x);
	printf("Y=");
	scanf("%d",&y);
	printf("Before Swapping X = %d & Y = %d \n",x,y);
	swap(&x,&y);
	printf("After Swapping X = %d & Y = %d \n",x,y);
	return 0;
	
}