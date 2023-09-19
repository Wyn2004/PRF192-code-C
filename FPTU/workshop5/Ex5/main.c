#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#include<ctype.h>

// Declare function
void processFile(char *filename, int *pn, double *sum);

//Main
int main()
{
    char *fileIn = "array3.txt";
    int n = 0;
    double sum = 0;
    processFile(fileIn, &n, &sum);
    printf("Number of values in file:%d\n",n);
    printf("Average of value in the file: %lf",(sum/n));
    return 0;
}

// Implements function
void processFile(char *filename, int *pn, double *sum)
{
    FILE *f = fopen(filename,"r");
    *pn = 0;
    *sum = 0;
    double x;
    while (fscanf(f,"%lf", &x)==1)
    {
        (*pn)++;
        *sum+=x;
    }
    fclose(f);
}