#include "functions.h"

int length(char *word)
    {

        int len = 0;
        while (word[len] != '\0') {
            len++;
        }
        return len;
    }
void conncate(char *word1,char * word2)
   {
      int len1=length(word1);
       int len2=length(word2);

       for (int i = 0; i < len2; i++) {
        word1[len1 + i] = word2[i];
        }
            word1[len1 + len2] = '\0';
   }


