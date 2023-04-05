#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first_large=0,second_large;
    int array[10];
    for (int i=0;i<10;i++){
        printf("Enter the element number %d : \n",i+1);
        scanf("%d",&array[i]);
        if (array[i]>first_large)
            {
                second_large = first_large;
                first_large=array[i];
                }
    }
    /**
    first_large=array[0];
    for(int i=0;i<10;i++)
        {
            if (array[i]>first_large)
            {
                second_large = first_large
                first_large=array[i];}
        }**/
        printf("Second Large Number = %d",second_large);

    return 0;
}
