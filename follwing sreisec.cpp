#include <stdio.h>
int main ()
{
    
    int n, i;
    long long term = 0, sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
            term = term * 100 + 1;
        else
            term = term * 10;

        sum = sum + term;
    }

    printf("Sum of the series = %lld", sum);

    return 0;
}	

