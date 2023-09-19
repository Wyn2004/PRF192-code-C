#include<stdio.h>

int main()  {
    char s1, s2 ,t;
    int i;
    printf("Enter the s1 character: ");
    scanf("%c",&s1);
    printf("Enter the s2 character: ");
    scanf(" %c",&s2);
    if (s1 > s2)    {
        t = s1;
        s1 = s2;
        s2 = t;
    }
    printf("\nASCII Code Difference: %d\n",  s2-s1 );
    printf("Characters and their expansions:\n");
    for (i = s1; i<=s2; i++)    {
        printf("%c : %d, %o, %X\n", i, i, i, i);
    }
    return 0;
}