#include "Functions.h"
int length1(char *word){
    int length=0;
    while(*word != '\0'){
        length++;
        word++;
    }
    return length;
}

void revstr(char *word)
{
    int x=length1(word);
    for (int i = 0; i < x / 2; i++) {
        char temp = word[i];
        word[i] = word[x-i-1];
        word[x-i-1] = temp;
    }

}

