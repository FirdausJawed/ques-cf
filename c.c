#include <stdio.h>
#include <conio.h>
struct complex
{
    float real, imag;
} a, b, c;
struct complex read(void);
void write(struct complex);
struct complex add(struct complex, struct complex);
struct complex sub(struct complex, struct complex);
struct complex mul(struct complex, struct complex);
struct complex div(struct complex, struct complex);
void main()
{
    printf("Enter the 1st complex number --> \n ");
    a = read();
    write(a);
    printf("Enter the 2nd complex number --> \n");
    b = read();
    write(b);
    printf("Addition\n ");
    c = add(a, b) write(c);
    printf("Substraction\n ");
    c = sub(a, b);
    write(c);
    printf("Multiplication\n");
    c = mul(a, b);
    write(c);
    printf("Division\n");
    c = div(a, b);
    write(c);
    getch();
}
struct complex read(void)
{
    struct complex t;
    printf("Enter the real part: ");
    scanf("%f", &t.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &t.imag);
    return t;
}
void write(struct complex a)
{
    printf("Complex number is ");
    printf(" %.1f + i %.1f", a.real, a.imag);
    printf("\n");
}
struct complex add(struct complex p, struct complex q)
{
    struct complex t;
    t.real = (p.real + q.real);
    t.imag = (p.imag + q.imag);
    return t;
}
struct complex sub(struct complex p, struct complex q)
{
    struct complex t;
    t.real = (p.real - q.real);
    t.imag = (p.imag - q.imag);
    return t;
}
truct complex mul(struct complex p, struct complex q)
{
    struct complex t;
    t.real = (p.real * q.real) - (p.imag * q.imag);
    t.imag = (p.real * q.imag) + (p.imag * q.real);
    return t;
}
struct complex div(struct complex p, struct complex q)
{
    struct complex t;
    t.real = ((p.imag * q.real) - (p.real * q.imag)) / ((q.real * q.real) + (q.imag * q.imag));
    t.imag = ((p.real * q.real) + (p.imag * q.imag)) / ((q.real * q.real) + (q.imag * q.imag));
    return (t);
}