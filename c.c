#include <stdio.h>
void main()
{
    int n, t;
    scanf("%d",&n);
    int neg = 0, pos = 0, zero = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &t);
        if (t > 0)
        {
            pos += 1;
        }
        else if (t < 0)
        {
            neg += 1;
        }
        else
        {
            zero++;
        }
    }
    printf("%d\n", pos);
    printf("%d\n", neg);
    printf("%d\n", zero);
}