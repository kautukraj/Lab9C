#include <stdio.h>
 
struct complex
{
   float real, imag;
};
 
int main()
{
    struct complex a, b, add,sub,mul;

    scanf("%f %f", &a.real, &a.imag);
    scanf("%f %f", &b.real, &b.imag);

    add.real = a.real + b.real;
    add.imag = a.imag + b.imag;
    
    sub.real = a.real - b.real;
    sub.imag = a.imag - b.imag;
    
    add.real = a.real + b.real;
    add.imag = a.imag + b.imag;
    
    mul.real = a.real*b.real - a.imag*b.imag;
    mul.imag = a.imag*b.real + a.real*b.imag;
    
    printf("%.2f + %.2fi\n", add.real, add.imag);
    printf("%.2f + %.2fi\n", sub.real, sub.imag);
    printf("%.2f + %.2fi\n", mul.real, mul.imag);
    
    return 0;
}
