#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10];
    for (int i=0;i<10;i++){
        printf("Enter the element number %d : \n",i+1);
        scanf("%d",&array[i]);
    }
    for(int i=0;i<10;i++){
        printf("number %d you enter = %d \n",i+1,array[i]);
    }

    return 0;
}
