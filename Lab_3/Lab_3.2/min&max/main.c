#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10];
    int min=0;
    int max=0;
    for (int i=0;i<10;i++){
        printf("Enter the element number %d : \n",i+1);
        scanf("%d",&array[i]);
    }
    min =array[0];
    max =array[0];
    for(int i=0;i<10;i++){
            if (array[i]>max){max=array[i];}
            if(array[i]<min){min=array[i];}
    }
    printf("\nminimum number = %d \nmax number = %d \n",min,max);
    return 0;
}
