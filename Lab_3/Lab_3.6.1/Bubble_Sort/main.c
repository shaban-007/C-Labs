#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10]={9,8,7,6,5,4,3,2,1,0};
    int temp;
    printf("The array without Bubble sorting :");
    for(int i=0;i<10;i++)
        {
            printf("%d",array[i]);
            if(i!=9){printf(",");}
        }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(array[j]>array[j+1])
                {
                    temp = array[j];
                    array[j] = array[j+1];
                    array[j+1]=temp;
                }
        }
    }

    printf("\nThe array without Bubble sorting :");
    for(int i=0;i<10;i++)
        {
            printf("%d",array[i]);
            if(i!=9){printf(",");}
        }
    return 0;
}
// o(n)=n^2
