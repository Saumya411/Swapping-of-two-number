#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("The number before swapping are %d %d\n",a,b);
	a=a+b;//swapping of numbers
    b=a-b;
    a=a-b;
    printf("The number after swapping are %d %d\n",a,b);
    return 0;
}
