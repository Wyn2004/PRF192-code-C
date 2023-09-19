#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#include<ctype.h>

// Declare function
void swap(int *a, int *b);
void fileToArray(char *filename, int *arr, int *pn);
void sort(int *arr, int n);
void print(int *arr, int n);
void printToFile(char *filename, int *arr, int n);

//Main
int main()
{
    char *fileIn = "array1.txt";
    char *fileOut = "array2.txt";
    int arr[200];
    int n=0;
    fileToArray(fileIn, arr, &n);
    sort(arr,n);
    print(arr,n);
    printToFile(fileOut,arr,n);
    return 0;
}

// Implements function
void fileToArray(char *filename, int *arr, int*pn)
{
    FILE *f = fopen(filename,"r");
    fscanf(f,"%d",pn);
    for (int i = 0; i<*pn; i++) fscanf(f,"%d ",&arr[i]);
    fclose(f);
}

// Function swap
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// Function sort array
void sort(int *arr, int n)
{
    for (int i = 0; i<n-1; i++)
        for (int j = i+1; j<n; j++)
            if (arr[i]>arr[j]) swap(&arr[i],&arr[j]);
}

//Function print
void print(int *arr, int n)
{
    for (int i = 0; i<n; i++) printf("%d ",arr[i]);
}

// Function print to file
void printToFile(char *filename, int *arr, int n)
{
    FILE *f = fopen(filename,"w");
    fprintf(f,"%d\n",n);
    for (int i = 0; i<n; i++) fprintf(f,"%d ",arr[i]);
    fclose(f);
}