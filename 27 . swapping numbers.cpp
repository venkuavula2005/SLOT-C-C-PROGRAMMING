#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter the number:");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("berfore swapping is%d",a);
	printf("after swapping is %d",b);
	return 0;
}
