#include<stdio.h>
#include<conio.h>
void main()
{
    char a='-';
    //printf("enter the character\n");
    //scanf("%c",&a);
    switch(a)
    {
        case 'A' ... 'Z':
        printf("its uppercase\n");
        break;
         case 'a' ... 'z':
        printf("its lowercase\n");
        break;
         case '0' ... '9':
        printf("its a number\n");
        break;
        default:
        printf("its  a special character\n");
    }
}




