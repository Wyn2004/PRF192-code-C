#include<stdio.h>

int main()  {
    int pa = 9000000, pd = 3600000, result = 0, ti = 1, tf= 0;
    int n, income;
    printf("Enter your income of this year:");
    scanf("%d", &income);
    printf("Enter number of dependent:");
    scanf("%d", &n);
    tf = 12 * (pa + n*pd);
    ti = income - tf; 
    printf("Tax-free income: %d\n",tf);
    if (ti<=0) ti = 0; else 
    if (ti>0 && ti<=5000000) result = ti*0.05; else 
    if (ti>5000000 && ti<=10000000) result = 5000000*0.05 + (ti-5000000)*0.1; else
    if (ti>10000000 && ti<=18000000) result = 5000000*0.05 + 5000000*0.1 +(ti-10000000)*0.15; else
    result = 5000000*0.05 + 5000000*0.1 +8000000*0.15+ (ti-18000000)*0.2;
    printf("Taxable income:%d\n",ti);
    printf("Incom tax: %d", result);
    return 0;
}
