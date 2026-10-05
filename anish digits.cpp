#include<stdio.h>
int main()
{
   int n, sum=0,rem;
   printf("Enter a number:");
   scanf("%d",&n);
   while(n>0)
   {
   	rem=n%10;
   	sum=rem+sum;
   	n=n/10;
   }
   printf("sum of digites=%d", sum);
   return 0 ;  	
}
