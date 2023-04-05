#include <stdio.h>
int main()
{
    int num1, num2;
    int sum, sub, mult, mod;
    float div;


    printf("Input any two numbers separated by comma : ");
    scanf("%d", &num1);
    scanf("%d", &num2);


    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = (float)num1 / num2;
    mod = num1 % num2;

    printf("The sum numbers : %d\n", sum);
    printf("The difference of the numbers : %d\n", sub);
    printf("The product of the numbers : %d\n", mult);
    printf("The quotient of the numbers : %0.2f\n", div);
    printf("MODULUS = %d\n", mod);

    return 0;
}
