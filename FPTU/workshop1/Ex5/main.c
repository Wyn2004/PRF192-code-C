#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()  {
char str[100], s;
int na = 0, pa = 0, ot = 0;
printf("Enter a string:");
fgets(str,sizeof(str),stdin);
str[strcspn(str, "\n")] = '\0'; //Clear \n in string
    for (int i = 0; i<strlen(str); i++)    {
        s = toupper(str[i]);
        if (s >= 'A' && s<= 'Z')    {
            switch (s)
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
printf("Vowel:%d\n", na);
printf("Consonant:%d\n", pa);
printf("Other:%d\n", ot);
return 0;
}