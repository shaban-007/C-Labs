#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i=0; i<=10;i++)
        {
            for(int j=1;j<=12;j++){
                printf("%d * %d = %d \n",i,j,i*j);
            }
            printf("*********************************\n");
        }
    return 0;
}
