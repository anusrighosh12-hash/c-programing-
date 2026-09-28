#include<stdio.h>
int main()
{
int n,i,a=0,b=1,c;
printf("Enter the numbers of terms:");
scanf("%d",&n);
while(i<=n)
{
printf("%d\t",a);
c=a+b;
a=b;
c=b;
i++;}
return 0;
}
