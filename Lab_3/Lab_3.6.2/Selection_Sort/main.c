#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10]={9,8,7,6,5,4,3,2,1,0};
    int temp;
    int min;
    printf("The array without Searching sorting :");

    for(int i=0;i<10;i++)
        {
            printf("%d",array[i]);
            if(i!=9){printf(",");}
        }



    for(int i=0;i<10;i++){
    min = i ;
        for(int j=i+1;j<10;j++){
            if(array[min]>array[j])
                {
                     min = j;
                }
        }
        if(min != i){
        temp = array[i];
        array[i] = array[min];
        array[min]=temp;
        }
    }



    printf("\nThe array without Searching sorting :");
    for(int i=0;i<10;i++)
        {
            printf("%d",array[i]);
            if(i!=9){printf(",");}
        }

    return 0;
}
