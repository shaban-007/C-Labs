#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

#define NUMBER_OF_STUDENTS 10


int main()
{
    struct Student studets[NUMBER_OF_STUDENTS];
    Input_data(studets,NUMBER_OF_STUDENTS);
    print_data(studets,NUMBER_OF_STUDENTS);
    return 0;
}

