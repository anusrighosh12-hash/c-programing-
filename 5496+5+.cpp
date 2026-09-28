#include<stdio.h>
int main()
{
int i=1, n, term=1,sum=0;
printf("Enter the number of term:");
scanf("%d",&n);
while(i<=n)
{
sum=sum+term;
term=term+i;
i++;
}
printf("sum of series=%d",sum);
return 0;
}
