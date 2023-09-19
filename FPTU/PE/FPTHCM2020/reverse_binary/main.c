#include<stdio.h>
#include<string.h>

int main() {
    char s[1000];
    printf("Enter number:");
    fflush(stdin);
    fgets(s,sizeof(s),stdin);
    printf("Result:");
    for (int i =strlen(s)-2; i>=0; i--) printf("%c",s[i]);
    return 0;
}