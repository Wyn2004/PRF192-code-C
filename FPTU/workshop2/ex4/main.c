#include<stdio.h>

//Function calculate factorial
int factorial(int n)    {
    int s = 1;
    if (n<=1)   {
        return s;
    } else  {
        for (int i = 2; i<=n; i++)  {
            s *=i;
        }
    }
    return s;
}

//Main
int main()  {
    int n;
    do  {
        printf("Enter a number: ");
        scanf("%d", &n);
    }   while (n<0);
    printf("Factorial of %d is %d\n", n, factorial(n));
    return 0;
}