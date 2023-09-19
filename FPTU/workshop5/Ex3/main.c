#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

// Declare function
int exist(char *fileName);
int writeFile(char *filename);
void printFile(char *filename);

//Main
int main()
{
    char filename[100]; 
    char line[100]; 
    printf("Program for waiting then reading a file.\n");
    printf("Enter the filename: ");
    scanf("%s", filename);
    fflush(stdin);
    printf("Write file:\n");
    if (exist(filename) == FALSE)
    {
        printf("Failed to open the file.\n");
        return 0;
    }
    printf("Enter data to the file (press Enter Ctrl+D or Ctrl+Z to finish):\n");
    if (writeFile(filename) == TRUE) printf("++++Done++++"); else
    {
        printf("Can not write on file.\n");
        return 0;
    }
    printf("\n");
    printFile(filename);
    return 0;
}

// Implements function
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

int writeFile(char*filename)
{
    char line[201];
    FILE *f = fopen(filename,"w");
        if (exist(filename) == TRUE)
    {
        printf("The file %s exist. Override it Y/N:",filename);
        if (toupper(getchar()) == 'N') return FALSE;
    }
    fflush(stdin);
    while (fgets(line, sizeof(line), stdin)) fprintf(f,"%s",line);
    fclose(f);
    return TRUE;
}

void printFile(char *filename)
{
    FILE *f = fopen(filename, "r");
    char c;
    char line[201];
    printf("Content of the file:\n");
    while (fscanf(f,"%s",line)>0) puts(line);
    fclose(f);
}