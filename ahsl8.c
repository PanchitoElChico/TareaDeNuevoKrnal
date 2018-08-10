//Sanchez Lopez Alexis Humberto  Grupo B
//Tarea 8
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main ()
    {
    char word[128];
    int mayusculas=0,minusculas=0;
    int i,total;
    printf("Introduce una palabra:\n");
    gets(word);
    for(i=0;i<128;i++)
        {
        if (!word[i])
            {
            total=i;
            break;
            }
        }
    for(i=0;i<total;i++)
            {
            if(isupper(word[i])) mayusculas++;
            else minusculas++;
            switch(word[i])
                {
                case('a'):
                case('e'):
                case('i'):
                case('o'):
                case('u'):
                break;
                }
            }
    printf("\n Mayusculas: %d", mayusculas);
    printf("\n Minusculas: %d", minusculas);
    getch();
    return 0;
    }
