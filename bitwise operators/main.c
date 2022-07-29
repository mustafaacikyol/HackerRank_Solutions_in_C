#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Complete the following function.

void calculate_the_maximum(int n, int k)
{
    int *and = malloc(500000 * sizeof(int));
    int * or = malloc(500000 * sizeof(int));
    int * xor = malloc(500000 * sizeof(int));
    int a = 0;

    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            and[a] = i & j;
            or [a] = i | j;
            xor[a] = i ^ j;

            a++;
        }
    }

    int b = 0;
    int c = 1;
    while (b == 0 && k - c >= 0)
    {
        for (int i = 0; i < a; i++)
        {
            if (and[i] == k - c)
            {
                printf("%d\n", and[i]);
                b++;
                break;
            }
        }

        if (k - c == 0)
        {
            printf("%d\n", 0);
        }
        c++;
    }

    b = 0;
    c = 1;

    while (b == 0 && k - c >= 0)
    {
        for (int i = 0; i < a; i++)
        {
            if (or [i] == k - c)
            {
                printf("%d\n", or [i]);
                b++;
                break;
            }
        }

        if (k - c == 0)
        {
            printf("%d\n", 0);
        }
        c++;
    }

    b = 0;
    c = 1;
    while (b == 0 && k - c >= 0)
    {
        for (int i = 0; i < a; i++)
        {
            if (xor[i] == k - c)
            {
                printf("%d\n", xor[i]);
                b++;
                break;
            }
        }

        if (k - c == 0)
        {
            printf("%d\n", 0);
        }
        c++;
    }

    free(and);
    free(or);
    free(xor);
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
