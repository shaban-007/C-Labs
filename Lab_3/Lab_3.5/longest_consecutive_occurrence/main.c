#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[15];
    int len=1,cons=0;
    for (int i=0;i<15;i++){
        printf("Enter the element number %d : \n",i+1);
        scanf("%d",&array[i]);
    }
    for (int i=0;i<14;i++)
        {
            if(array[i]==array[i+1]){len++;}
            else
                {
                    if(len>cons){
                        cons = len;
                    }
                    len=1;
                }
        }
        printf("\nthe longest consecutive = %d",cons);
    return 0;
}
