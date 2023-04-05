#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Number=0;
    while(Number<100)
        {
            int x=0;
            printf("\nEnter the number \n");
            scanf("%d",&x);
            Number = Number + x;
            printf("The Number = %d", Number);
        }
        printf("\nExceed 100 <<>> \n",Number);
    return 0;
}
