#include<stdio.h>

int main()  {
    int n, s;
    s = 0;
    do{
    printf("Enter your value:");
    scanf("%d",&n);
    s = s + n;
    } while (n!=0);
    printf("Result:%d", s);
    return 0;
}