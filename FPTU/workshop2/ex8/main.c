#include<stdio.h>

//Function make a real number
double make_real(long int a, long int b)  {
    double f = b, result = 0;
    while (f>1)   {
        f/=10;
    }
    if (a>0)    {
        result = a + f;
    } else  {
        result = a - f;
    }
    return result;
}

//Main 
int main()  {
    long int a, b;
    do  {
        printf("Enter the integral part and fraction of a real number: ");
        scanf("%ld %ld",&a,&b);
    } while (b<0);
    printf("The real number is: %lf\n",make_real(a,b));
    return 0;
}