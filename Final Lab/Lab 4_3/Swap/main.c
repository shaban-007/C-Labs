#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1=2;
    int num2=7;
    printf("Number1 = %d \nnumber2 = %d ,\n",num1,num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("After swap \nNumber1 = %d \nnumber2 = %d ,\n",num1,num2);

    num1=num1*num2;
    num2=num1/num2;
    num1=num1/num2;


    printf("After swap again \nNumber1 = %d \nnumber2 = %d ,\n",num1,num2);


    return 0;
}
