#include<string.h>
#include<stdlib.h>
#include<stdio.h>
void recverse(char *s, int l2)  {
    int a = 0 ;
    while (a<=l2)
    {
        char temp;
        temp = s[a];
        s[a]= s[l2];
        s[l2] = temp;
        a++;
        l2--;
    }
}

void replaceString(char s1[], char s2[])  {
    int l2 = strlen(s2);
    int l1 = strlen(s1);
    char *find = strstr(s1,s2);
    while (find!= NULL) {
        recverse(find,l2-1);
        find = strstr(s1,s2);
    }
    printf("%s",s1);
}

int main()  
{
    char s1[1000], s2[1000];
    printf("Enter first string:");
    fflush(stdin);
    fgets(s1,sizeof(s1)-1,stdin);
    printf("Enter second string:");
    fflush(stdin);
    fgets(s2,sizeof(s2)-1,stdin);
    s1[strlen(s1)-1]='\0';
    s2[strlen(s2)-1]='\0';
    int l = strlen(s1);
    replaceString(s1,s2);
    return 0;
}