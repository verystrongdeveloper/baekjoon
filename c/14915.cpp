#include "stdio.h"

int main()
{
    int m, n = 0;
    scanf("%d %d", &m, &n);
    int k = m % n;
    int j = m / n;
    while (j > 0)
    {
        if (k == 10)
            printf("A");
        if (k == 11)
            printf("B");
        if (k == 12)
            printf("C");
        if (k == 13)
            printf("D");
        if (k == 14)
            printf("E");
        if (k == 15)
            printf("F");
        else
            printf("%d", k);

        j = j / n;
        m = j;
    }
    return 0;
}