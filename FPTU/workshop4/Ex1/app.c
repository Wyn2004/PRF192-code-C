#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[11];
    // for (int i = 0; i<10; i++)  {
    //     printf("%c",s[i]);
    // }
    printf("Enter string:");
    fflush(stdin);
    fgets(s,sizeof(s),stdin);

    // if (s[0]=='0')
    printf("%lu\n",strlen(s));
    for (int i = 0; i<strlen(s); i++)
    printf("%c",s[9]);
    return 0;
}