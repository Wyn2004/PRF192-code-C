#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

//Declare function
int exist(char *fileName);
int writeFile(char *filename);
int printFile(char *filename);

int main()
{
    char filename[81];
    printf("Program for waiting then reading a file.\n");
    printf("Enter the filename: ");
    fgets(filename, sizeof(filename),stdin);
    fflush(stdin);
    printf("Write file:\n");
    if (writeFile(filename)==TRUE)
    {
        printf("Data in the file %s:\n",filename);
        if (printFile(filename) == FALSE) printf("File error!\n");
    } else printf("Writing file %s fail!!!!\n",filename);
    getchar();
    return 0;
}

// Implement functions

// Function check exist file
int exist(char *fileName)
{
    int existed = TRUE;
    FILE *f = fopen(fileName,"r");
    if (f == NULL)
    {
        existed = FALSE;
        return existed;
        fclose(f);
    }
    return existed;
}

// Function write on file
int writeFile(char *filename)
{
    if (exist(filename) == TRUE)
    {
        printf("The file %s exist. Override it Y/N:",filename);
        if (toupper(getchar()) == 'N') return FALSE;
    }
    char line[201];
    int length = 0;
    FILE *f = fopen(filename,"w");
    fflush(stdin);
    do
    {
        fgets(line,sizeof(line),stdin);
        length  = strlen(line);
        if (length>0)
            {
                fputs(line,f);
                fputs("\n",f);
            }
    } while (length>0);
    fclose(f);
    return TRUE;
}

// Function print on terminal
int printFile(char *filenme)
{
    char c;
    if (exist(filenme)==FALSE)
    {
        printf("The file %s does not exist.\n",filenme);
        return FALSE;
    }
    FILE *f = fopen(filenme,"r");
    while ((c = fgetc(f))!=EOF) putchar(c);
    fclose(f);
    return TRUE;
}