#include<stdio.h>

//Function find n-th fibonacci number
void fibonacci(int n)
{
    int f = 1, y = 0;
    for (int i = 1; i<=n; i++)  {
        printf("%d ", f);
        f = f + y; 
        y = f - y ;
    }
}

//Main
int main()
{
    int n;
    do  {
        printf("Enter number:");
        scanf("%d",&n);
    }   while (n<=0);
    printf("Fibonacci sequence:");
    fibonacci(n);
    return 0;
}