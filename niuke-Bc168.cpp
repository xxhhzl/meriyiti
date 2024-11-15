#include <stdio.h>
int css(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else 
    {
        return css(n-1)+n;
    }
}
int main() 
{
    int n;
    scanf("%d",&n);
    printf("%d",css(n));
    return 0;
}
