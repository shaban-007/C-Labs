#include <stdio.h>
#include <stdlib.h>
#include "functions.h"


#define NUMBER_OF_STUDENTS 10


void Input_data(struct Student *data,int size ){
for(int i=0;i<size;i++)
    {
        printf("Enter the name , ID and Grade for student %d\n",i+1);
        scanf("%s %d %d",data[i].name,&data[i].id,&data[i].grade);
    }
}


void print_data(struct Student *data, int size) {
    printf("Name\tID\tGrade\n");
    for (int i = 0; i < size; i++) {
        printf("%s\t%d\t%d\n", data[i].name, data[i].id, data[i].grade);
    }
}
