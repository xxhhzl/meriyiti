#pragma warning(disable : 4996)
#include <stdio.h>
int css(int n)
{
    if (n <= 2)
    {
        return n;
    }
    else
    {
        return css(n - 1) + css(n - 2);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 1 && n <= 30)
    {
        printf("%d", css(n));
    }
    return 0;
}