#include <stdio.h>
void mountain(int step, int goal)
{
    printf("%d", step);
    if (step != goal)
    {
        mountain(step + 1, goal);
        printf("%d", step);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    mountain(1, n);
    return 0;
}