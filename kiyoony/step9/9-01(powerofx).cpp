#include <stdio.h>
int pow(int a, int b)
{
    if (b)
        return a * pow(a, b - 1);
    else
        return 1;
}
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", pow(x, y));
    return 0;
}