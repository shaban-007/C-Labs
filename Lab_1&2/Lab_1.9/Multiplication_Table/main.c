#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    printf("Enter the number to generate the Multiplication Table \n");
    scanf("%d",&num1);
    for (int i=1;i<13;i++){
        printf("%d * %d = %d \n",i,num1,i*num1);
    }
    return 0;
}
