#include<stdio.h>
int main()
{
	int a=0,b=0,c=1;
	int i=0,d,n;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("\ntribonacci=");
	while(i<=n)
	{
		printf("%d",a);
		d=a+b+c;
		a=b;
		b=c;
		c=d;
		i++;
	}
	return 0;
}
