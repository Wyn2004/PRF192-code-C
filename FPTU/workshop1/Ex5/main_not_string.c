#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()  {
int na = 0, pa = 0, ot = 0;
char ch;
printf("Enter a string:");
do
{
    ch = toupper(getchar());
    if (ch=='\n')   {
        break;
    } else  {
        if ((ch>='A') && (ch<='Z'))   {
            switch (ch)
                {   
                    case 'U':
                    case 'E':
                    case 'O':
                    case 'A':
                    case 'I': 
                        na++;
                        break;
                    default: pa++;
                } 
        } else ot++;
    }
} while (ch != '\n');
printf("Vowel:%d\n", na);
printf("Consonant:%d\n", pa);
printf("Other:%d\n", ot);
return 0;
}