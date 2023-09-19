#include<string.h>
#include<stdio.h>
#include<ctype.h>

int countNum(char str[])
{
    int isNum = 0;
    for (int i = 0; i<strlen(str)-1; i++)
    {
        if (isdigit(str[i]) && !isdigit(str[i+1]))
        isNum++;
    }
    return isNum;
}

int main()
{
    char str[100];
    printf("Enter number:");
    fflush(stdin);
    fgets(str,sizeof(str),stdin);
    printf("Number in string is:%d",countNum(str));
    return 0;
}