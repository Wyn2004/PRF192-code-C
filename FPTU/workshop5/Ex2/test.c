#include <stdio.h>
#include <stdlib.h>


int main() {
    char filename[100]; 
    FILE *file; 
    char line[100]; 

    // User enters the filename
    printf("Enter the filename: ");
    scanf("%s", filename);
    fflush(stdin);

    // Open the file in write mode
    file = fopen(filename, "w");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 0;
    }
    // User enters data to the file line-by-line until a null string is inputted
    printf("Enter data to the file (press Enter without any input to finish):\n");
    while (fgets(line, sizeof(line), stdin)) {
        // if (line[0] == '\n') {
        //     break; // Exit the loop if an empty line is entered
        // }
        fputs(line, file); // Write the line to the file
    }

    // Close the file
    fclose(file);

    // Open the file in read mode
    file = fopen(filename, "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    // Print the content of the file
    printf("Content of the file:\n");
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    // Close the file
    fclose(file);

    return 0;
}

