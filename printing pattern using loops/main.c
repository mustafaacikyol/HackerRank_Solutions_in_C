#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    int c = 2;
    for (int i = 0; i < (2 * n) - 1; i++)
    {
        int a = 1;
        int b = 1;
        
        for (int j = 0; j < (2 * n) - 1; j++)
        {
            if (i == 0 || i == (2 * n) - 2)
            {
                printf("%d ", n);
            }
            else
            {
                if (i<n)
                {
                    if (j == 0 || j == (2 * n) - 2)
                    {
                        printf("%d ", n);
                    }
                    else if (j <= i)
                    {
                        printf("%d ", n - a);
                        if (j < i)
                        {
                            a++;
                        }
                    }
                    else if (j > i && j < (2 * n) - 1 - i)
                    {
                        printf("%d ", n - a);
                    }
                    else if (j >= (2 * n) - 1 - i)
                    {
                        printf("%d ", n - a + b);
                        b++;
                    }
                }else if (i>=n)
                {
                    if (j == 0 || j == (2 * n) - 2)
                    {
                        printf("%d ", n);
                    }
                    else if (j <= n - c)
                    {
                        printf("%d ", n - a);
                        a++;
                        if (j==n-c)
                        {
                            c++;
                        }
                                                  
                    }
                    else if (i>j && j >= (2 * n) - 1 - i)
                    {
                        printf("%d ", n - a+1);
                    }
                    else if (j>=i)
                    {
                    
                        printf("%d ", n - a + b);
                        b++;
                    }
                    
                }
            
            }
        }
        printf("\n");
    }
    return 0;
}
