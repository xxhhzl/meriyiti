#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, b;
    scanf("%d", &n);
    int a[1000];
    for (b = 0; b < n; b++)
    {
        scanf("%d", &a[b]);
    }
    int i, c = 0, d = 0;
    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            c = c + a[i];
        }
        else
        {
            d = d +a[i];
        }
    }
    printf("%d", c - d);
    return 0;
}
int main()
{
    int n, b;
    scanf("%d", &n);
    int a[1000];
    for (b = 0; b < n; b++)
    {
        scanf("%d", &a[b]);
    }
    int i, c = 0;
    for (i = 0; i < n; i++)
    {
        c+=a[i];
    }
    printf("%d", c);
    return 0;
}

