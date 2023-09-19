#include<stdio.h>

//Function calculate factorial
unsigned long long factorial(int n)    {
    int s = 1;
    unsigned long long result = 1;
    if (n<=1)   {
        return result;
    } else  {
        while (s<=n)    {
            if (s==n)    {
                result *= s;
                return result;
            }
            result *= s*n;
            n--;
            s++; 
        }
    }
    return result;
}

//Main
int main()  {
    int n;
    do  {
        printf("Enter a number: ");
        scanf("%d", &n);
    }   while (n<0);
    printf("Factorial of %d is %llu\n", n, factorial(n));
    return 0;
}