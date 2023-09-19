#include<stdio.h>

int main()  {
    int n;
    printf("Enter side of square:"); scanf("%d",&n);
    for (int i = 1; i<=n; i++)   
        if ((i==1) || (i==n))
        {
            for (int h = 1; h<=n; h++) printf("* ");
            printf("\n");
        } else
        {
            for (int j =1; j<=n; j++) 
                if ((j==1) || (j==n)) printf("* "); else printf("  ");
            printf("\n");
        }
    return 0;
}