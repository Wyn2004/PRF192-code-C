#include <stdio.h>
// Main
int main()  {
double a, b;
char x;
printf("Enter your expression:");
scanf("%lf%c%lf", &a, &x, &b);
double result;
switch (x)  {
    case '+':   {
        result = a + b;
        printf("%.3lf %c %.3lf = %.3lf", a, x, b , result);
        break;
      }
    case '-':   {
        result = a - b;
        printf("%.3lf %c %.3lf = %.3lf", a, x, b, result);
        break;
    }
    case '*':   {
        result = a * b;
        printf("%.3lf %c %.3lf = %.3lf", a, x, b, result);
       break;
    }
    case '/':   {
        if (b == 0) {
            printf("Division by zero");
            break;

        }else   {
            result = a / b;
            printf("%.3lf %c %.3lf = %.3lf", a, x, b, result);
            break;
        }
    }
}
return 0;
}