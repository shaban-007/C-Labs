#include <stdio.h>
#include <stdlib.h>

int main()
{
    char alphabet;
    printf("Enter the alphabet \n");
    scanf("%c",&alphabet);
    if ((alphabet >= 'a' && alphabet <= 'z') || (alphabet >= 'A' && alphabet <= 'Z'))
        {
            printf("%c is alphabet",alphabet);
        }
    else {
        printf("%c is not alphabet",alphabet);
    }
    return 0;
}
