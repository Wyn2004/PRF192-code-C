#include<stdio.h>
#include<stdlib.h>
void number_exist(int arr[], int n){
    for (int i = 0; i<n; i++) {
        if ((arr[i] % 3 == 0) && (arr[i] !=0))
            {
                int d = 1;
                for (int j = i+1; j<n; j++)
                    if ((arr[j] %3 == 0) && (arr[i] == arr[j]))
                        {
                            d++;
                            arr[j] = 0;
                        }
                printf("%d    %d\n",d,arr[i]);
            }
    }
}

int main(){
    int n=0, x;
    int *arr;
    arr = (int*)malloc(sizeof(int));
    while((scanf("%d",&x) == 1))  {
        arr[n] = x;
        arr = (int*)realloc(arr,1);
        n++;
        if (getchar() == '\n') break;
    }
    number_exist(arr,n);
    free(arr);
    return 0;
}
