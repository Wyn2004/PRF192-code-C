#include<stdio.h>

//Function find LMC and GCD
long int gcd(int a, int b) {
    if (a==b)   {
        return a;
    } else  {
        while (a!=b)    {
            if (a>b)    {
                a-=b;
            } else {
                b-=a;
            }
        }
    }
    return a;
}

//Main 
int main()  {
    long int a, b;
    do  {
        printf("Enter two numbers:");
        scanf("%li %li", &a, &b);
    }   while ((a<=0) || (b<=0));
    printf("GCD %li and %li=%li\n", a, b, gcd(a,b));
    printf("LCM %li and %li=%li", a, b, (a*b)/gcd(a,b));
    return 0;
}