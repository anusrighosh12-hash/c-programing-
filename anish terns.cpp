


#include <stdio.h>

int main()
{
    int n, i, sum = 0, term;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        term = 2 * i - 1;

        if (i % 2 == 1)
            sum = sum + term;
        else
            sum = sum - term;
    }

    printf("Sum = %d\n", sum);

    return 0;
}
