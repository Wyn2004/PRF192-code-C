#include<stdio.h>
#include<stdlib.h>

//Declare function
void inputArray();
void inputChoice(double arr[], int *elements);
void handleCode(int num, double arr[], int *elements);
void addValue(double arr[], int *n, double value);
void searchValue(double arr[], int *n, double value);
void printArray(double arr[], int *n);
void printValueInRange(double arr[], int *n, double min, double max);
void printAscendingArray(double arr[], int *n);

//Main
int main()
{
    inputArray();
    return 0;
}

/////////////My function/////////////

//Function input array
void inputArray()
{
    int n;
    do
    {
        printf("Enter number elements of array:");
        scanf("%d",&n);
    }while (n<1 || n>100);
    double arr[n];
    printf("Enter you array: ");
    for (int i =0; i<n; i++)   
        {
            scanf("%lf",&arr[i]);
        }
    inputChoice(arr,&n);
}

//Function input
void inputChoice(double arr[], int *elements)
{
    int n;
    do
    {
        printf("============================\n");
        printf("1. Add a value.\n");
        printf("2. Search a value.\n");
        printf("3. Print out the array.\n");
        printf("4. Print out values in a range.\n");
        printf("5. Print out the array in ascending order.\n");
        printf("0. Exit.\n");
        printf("============================\n");
        printf("\nEnter your choice:");
        scanf("%d",&n);
        printf("Loading...\n");
        handleCode(n, arr, elements);
    } while (n>0 && n<6);
    printf("Thank you.");
}

//Function handle input
void handleCode(int num, double arr[], int *elements)
{
    switch (num)    
        {
            case 1:
            {
                double value;
                printf("Enter value you want add to array: ");
                scanf("%lf",&value);
                addValue(arr, elements, value);
                break;
            }    
            case 2:
            {
                double value;
                printf("Enter value you want to search: ");
                scanf("%lf",&value);
                searchValue(arr, elements, value);
                break;
            }
            case 3:
                printArray(arr, elements);
                break;
            case 4:
            {
                double min,max;
                printf("Enter minimum range: ");
                scanf("%lf",&min);
                printf("Enter maximum range: ");
                scanf("%lf", &max);
                printValueInRange(arr, elements, min, max );
                break;
            }
            case 5: 
            {
                printAscendingArray(arr, elements);
                break;
            }
        }
}

//Function add value to array
void addValue(double arr[], int* n, double value)  
{
    arr[*n] = value;
    (*n)++;
    printf("Array after add new value: ");
    for (int i = 0; i<*n; i++)
        {
            printf("%lf ",arr[i]);
        }
    printf("\n");
}
// Function search value in array
void searchValue(double arr[], int *n, double value)
{
    int d = 0;
    for (int i = 0; i<*n; i++)   
        if (arr[i] == value) d++; 
    printf("The number of occurrences of %lf in the array is: %d\n",value, d);
}

//Funtion print value int array
void printArray(double arr[], int* n)
{
    printf("The array: ");
    for (int i = 0; i <*n; i++)
        {
            printf("%lf ",arr[i]);
        }
    printf("\n");
}

// Function print value in range
void  printValueInRange(double arr[], int* n, double min, double max)
{
    printf("Values int %lf and %lf: ",min, max);
    for (int i = 0; i<*n; i++)   
        if ((arr[i]>=min) && (arr[i]<=max)) 
            printf("%lf ",arr[i]);
    printf("\n");
}

//Function sort ascending array
void printAscendingArray(double arr[], int *n)
{
    double x;
    double *ptr = (double*)calloc(*n,sizeof(double));
    for (int i = 0; i<*n; i++)
    *(ptr+i) = arr[i];
    for (int i = 0; i<*n-1; i++)
        for (int j = i+1; j<*n; j++)
            if (*(ptr+i)>*(ptr+j))
                {
                    x = *(ptr+i);
                    *(ptr+i) = *(ptr+j);
                    *(ptr+j)=x;
                }
    printf("Ascending array: ");
    for (int i  = 0; i<*n; i++) printf("%lf ",*(ptr+i));
    printf("\n");
    free(ptr);
}