/*
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main()
{
    char firstword []= "ahmed";
    char secondword []= "shaban";
    int w1=length(firstword);
    int w2=length(secondword);
    printf("%d  %d",w1,w2);
    char fullname [w1+w2];
    for(int i=0;i<w1;i++){
        fullname[i]=firstword[i];
        fullname[w1+i]=secondword[i];
    }
    printf("hell");
    printf("%s",fullname);
    return 0;
}
*/
#include <stdio.h>
/*
void stringConcat(char* str1, char* str2) {
    int length1 = 0;
    while (str1[length1] != '\0') {
        length1++;
    }
    int length2 = 0;
    while (str2[length2] != '\0') {
        length2++;
    }
    for (int i = 0; i < length2; i++) {
        str1[length1 + i] = str2[i];
    }
    str1[length1 + length2] = '\0';
}
*/
int main() {
    char str1[20] = "ahmed ";
    char str2[] = "shaban ";
    conncate(str1, str2);
    printf("Concatenated string: %s\n", str1);
    return 0;
}
