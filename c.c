#include <stdio.h>
#include <conio.h>

void main()

{
    int i, first = 0, second = 1, next, limit;
    // clrscr();
    printf("enter a number");
    scanf("%d", &limit);
    printf("0\n");
    printf("1");

    i = 1;

    while (i <= limit - 2)
    {
        next = first + second;

        first = second;

        second = next;

        printf("\n%d", next);

        i++;
    }

    // getch();
}