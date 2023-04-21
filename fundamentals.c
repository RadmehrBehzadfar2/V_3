#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80  // maximum size of user input
#define NUM_INPUT_SIZE 10  // maximum size of numeric input
#include "fundamentals.h"  // included header file for function declarations

// This function takes user input and performs indexing on a given string based on user input.
void fundamentals(void) {
    char buffer1[BUFFER_SIZE];  // define a character array to store user input of maximum size BUFFER_SIZE
    char numInput[NUM_INPUT_SIZE];  // define a character array to store numeric input of maximum size NUM_INPUT_SIZE
    size_t position;  // define a variable to store the position of the character to be found in the input string

    // repeat until user enters 'q' to quit
    do {
        printf("Type not empty string (q - to quit):\n");  // prompt user to enter a non-empty string
        fgets(buffer1, BUFFER_SIZE, stdin);  // read user input and store it in the buffer array
        buffer1[strlen(buffer1) - 1] = '\0';  // remove the newline character from the user input

        // if user did not enter 'q'
        if (strcmp(buffer1, "q") != 0) {
            printf("Type the character position within the string:\n");  // prompt user to enter a character position
            fflush(stdin);  // flush any remaining input in the stdin buffer
            fgets(numInput, NUM_INPUT_SIZE, stdin);  // read user input and store it in the numInput array
            numInput[strlen(numInput) - 1] = '\0';  // remove the newline character from the user input
            position = atoi(numInput) - 1;  // convert user input to integer and store it in position variable, subtracting 1 to convert from 1-indexing to 0-indexing

            // if user entered a position greater than the length of the input string
            if (position >= strlen(buffer1)) {
                position = strlen(buffer1) - 1;  // set the position to the index of the last character in the input string
                printf("Too big... Position reduced to max. available\n");  // print a warning message
            }
            printf("The character found at %d position is '%c'\n", position + 1, buffer1[position]);  // print the character at the specified position in the input string
        }
    } while (strcmp(buffer1, "q") != 0);  // repeat until user enters 'q' to quit

    printf("End of Indexing Strings Demo\n");  // print a message to indicate the end of the function

    //V2
    printf("*** Start of Measuring strings Demo ***\n"); // Printing a start message for the demo

        char buffer2[BUFFER_SIZE]; // Declaring a character array buffer2 with a size of BUFFER_SIZE

    do {
        printf("Type a string (q - to quit):\n"); // Prompting the user to enter a string
            fgets(buffer2, BUFFER_SIZE, stdin); // Reading input from the user and storing it in buffer2
        buffer2[strlen(buffer2) - 1] = '\0'; // Removing the newline character from the input string
        if (strcmp(buffer2, "q") != 0) // Checking if the input string is not "q"
            printf("The lenght of \'%s\' is %d characters\n", // Printing the length of the input string
                buffer2, (int)strlen(buffer2));
    } while (strcmp(buffer2, "q") != 0); // Continuing the loop until the input string is "q"
    printf("*** End of Measuring String Demo ***\n\n"); // Printing an end message for the demo
    
    //V3
    printf("*** Start of Copying Starting Demo ***\n");
    char destination[BUFFER_SIZE];
    char source[BUFFER_SIZE];
    do {
        destination[0] = '\0';
        printf("Destination string is reset to empty\n");
        printf("Type the source string (q - to quit):\n");
        fgets(source, BUFFER_SIZE, stdin);
        source[strlen(source) - 1] = '\0';
        if (strcmp(source, "q") != 0) {
            strcpy(destination, source);
            printf("New destination string is \'%s\'\n", destination);
        }
    } while (strcmp(source, "q") != 0);
    printf("*** End of Copying String Demo ***\n\n");
}