#include<stdio.h>

int main()
{
    int n;
    printf("Enter number colums:");
    scanf("%d",&n);
    for (int i = 0; i<=n; i++)
    {
        int count=2;
        for (int j = 0; j<2*i-1; j++)
        {
            if (j>(2*i-1)/2)    
            {
                printf("%c",(char)(j+65-count));
                count+=2;
            }
            else printf("%c",(char)(j+65));
        }
        printf("\n");
    }
    return 0;
}