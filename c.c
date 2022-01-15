#include <stdio.h>
void main()
{
    int x,y,z;
    printf("enter the first angle: ");
    scanf("%d", &x);
    printf("enter the second angle: ");
    scanf("%d", &y);
    printf("enter the third angle: ");
    scanf("%d", &z);

    int sum_of_angles = x + y + z;
    if (sum_of_angles==180)
    {
        printf("It is a valid triangle");
    }
    else{
        printf("It is not a valid triangle");
    }
}