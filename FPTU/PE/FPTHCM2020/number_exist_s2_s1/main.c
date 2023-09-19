#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_LEN 100

int number_exist(char s1[MAX_LEN], char s2[MAX_LEN])  {
    int len1 = strlen(s1)-1;
    int len2 = strlen(s2)-1;
    int d=0;
    for (int i = 0; i<=len1-len2; i++)
        {
            int j;
            for (j = 0; j<len2; j++)
                if (s1[i+j]!=s2[j]) break;
            if (j == len2)   d++;
        }
    return d;
}

int main()  {
    char s1[MAX_LEN];
    char s2[MAX_LEN];
    printf("Enter s1:");
    fflush(stdin);
    fgets(s1,sizeof(s1),stdin);
    printf("Enter s2:");
    fflush(stdin);
    fgets(s2,sizeof(s2),stdin);
    printf("Number exist of s2 in s1 is:%d",number_exist(s1,s2));
    return 0;
}