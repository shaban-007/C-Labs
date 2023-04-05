
/*
        Author    : Ahmed Shaban
        program   : Magic Box
        Modified  : 04 April 2023

*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

void gotoxy(int a,int b){
    COORD c;
    c.X = a;
    c.Y = b;

    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void textattr(int i){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}

int main()
{
    int size;
    do{
        printf("Please, Enter size: ");
        scanf("%i",&size);

        if(size %2 == 0){
            textattr(4);
            printf("Size should be odd number!\n");
           // textattr(7);
        }else if(size == 1){
            textattr(4);
            printf("Size should not equal 1!\n");
            textattr(7);
        }

    }while(size == 1 || size%2 == 0);

    system("cls");

    gotoxy(1,1);
    printf("Magic box size = %d\n", size);

    int row = 1 ,col = ( size / 2 ) +1;

    for(int i=1 ; i <= size*size ; i++){

       gotoxy(col*4 , row*3);

       if(i%2==0) textattr(3);
       else textattr(7);

       printf("%i" , i);

       if(i % size != 0){
            row--;
            col--;
            if(row < 1){
                row = size;
            }
            if(col < 1){
                col = size;
            }
       }else{
           row++;
       }
    }
    textattr(7);

    return 0;
}
