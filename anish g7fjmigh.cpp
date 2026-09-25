
	#include<stdio.h>
	intmain()
	{
		int n;
		int sum=0;
		scanf("%d",&n);
		int i=1;
		while(i<=n)
	{
		int fact=1;
		int j=1;
		while(j<=i){
			fact=fact*j;
			j++
		}
		sum+=fact;
		i=i+2;
	}
	printf("%d",sum);
	return 0;
	}
