#include<stdio.h>

//Function find n-th fibonacci number
long int  fibonacci(int n)
{
    int f = 1, y = 0;
    for (int i = 2; i<=n; i++)  {
        f = f + y; 
        y = f - y ;
    }
    return f;
}

//Main
int main()
{
    int n;
    do  {
        printf("Enter number:");
        scanf("%d",&n);
    }   while (n<=0);
    printf("The value at the nth position in Fibonacci sequence:%li",fibonacci(n));
    return 0;
}