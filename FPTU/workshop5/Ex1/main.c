#include <stdio.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

// Declare function 
int handleFile(char *fileName);

//Main
int main(int argCount, char* agrs[]) {
    char *fileName = "output.txt";
    int check = handleFile(fileName);
    if (check == TRUE) printf("Write the file %s done.\n",fileName);
    else printf("Can not write the file %s.",fileName);
    return 0;
}

// Implements function open and write file
int handleFile(char *fileName)
{
    FILE *f = fopen(fileName, "w");
    char ch;
    if (f == NULL) {
        printf("Unable to create the file.\n");
        return FALSE;
    }
    printf("The file %s existed. Override it Y/N:",fileName);
    if (toupper(getchar())== 'N') return FALSE;
    fflush(stdin);
    printf("Enter text (Press Ctrl+D or Ctrl+Z to stop):\n");
    while ((ch = getchar()) != EOF) putc(ch,f);
    return TRUE;
}