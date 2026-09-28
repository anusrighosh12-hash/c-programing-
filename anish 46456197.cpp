#include<stdio.h>
int main(){
int n, i=1,term=2,sum=0;
printf("Enter the number:");
scanf("%d",&n);
while(i<=n)
{
   sum=sum+term;
   term=term+3;
   i++;
}
   printf("sum=%d",sum);
return 0;
}


