#include<stdio.h>

int main()  {
    int n, s=1;
    printf("Enter number elements of array:"); scanf("%d",&n);
    int arr[n];
    for (int i = 0; i<n; i++)
        {
            scanf("%d",&arr[i]);
            if (arr[i]%2==0) s*=arr[i];
        }
    printf("Result:%d",s);
    return 0;
}