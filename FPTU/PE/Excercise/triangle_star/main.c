#include<stdio.h>

void triangle(int n)    {
    int r = 0;
    while (r<=n)
    {
        for (int i = 0; i<n; i++)
            if (i>=r) printf("*"); else printf(" ");
        printf("\n");
        r++;
    }
}

int main()  
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    triangle(n);
    return 0;
}