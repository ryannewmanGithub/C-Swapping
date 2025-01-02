#include <stdio.h>
// Before compiling with VS Code C/C++ extension, run this command in PowerShell terminal: gcc swap.c -o swap.exe

// Compiling on Linux: gcc -o swap swap.c
// Then run by doing : ./swap

// This is incorrect. Do NOT do this because this only affects the local copy of the integers a and b.
// Instead, you need to pass in the pointers.
// Another way is to create a temporary variable, set that equal to b. Then set b = a. Then set a = temp.
// However, that would use additional memory, which is constrained in embedded systems, for example.
void incorrectSwap(int a, int b) {
    a = a + b;
    b = a - b; // (a + b) - b = a
    a = a - b; // (a + b) - a = b
}

// This is the correct way to swap because it passes in the pointers, which have the memory addresses
// of the integers as values.
void swap(int* a, int* b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

// This character swap function takes advantage of the ASCII encoding of characters.
void charSwap(char* a, char* b) {
    // To examine the ASCII values of the chars:
    /*
    printf("ASCII Encoding of 1st char = %d\n", (int)*a);
    printf("ASCII Encoding of 2nd char = %d\n", (int)*b);
    printf("\n");
    */

    // In all of these, dereference the pointer, and then cast to an int.
    *a = (int)*a + (int)*b;
    *b = (int)*a - (int)*b;
    *a = (int)*a - (int)*b;
}

int main() {


    int int1, int2;
    char char1, char2;


    printf("Enter the two integers to swap: \n");
    scanf("%d", &int1);
    scanf("%d", &int2);
    printf("\n");

    printf("You entered: \n");
    printf("First int = %d\n", int1);
    printf("Second int = %d\n", int2);
    printf("\n");


    incorrectSwap(int1, int2);
    printf("After calling the incorrect swap, the values are now: \n");
    // Expected output: No change from previous print statements of the user-inputted values
    printf("First int = %d\n", int1);
    printf("Second int = %d\n", int2);
    printf("\n");

    swap(&int1, &int2);
    printf("After calling the correct swap, the values are now: \n");
    // Expected output: Values are swapped from previous print statements
    printf("First int = %d\n", int1);
    printf("Second int = %d\n", int2);
    printf("\n");

    // This is to remove the newline from the input buffer from when the user entered in the second integer
    scanf("%c", &char1);

    printf("Enter the two characters to swap (Do NOT have a space between or before the characters)\n");
    printf("For example, if you want to swap 'a' and 'b', enter ab and then hit enter.\n");
    printf("You should only be hitting enter once.\n");
    scanf("%c", &char1);
    scanf("%c", &char2);
    printf("\n");


    charSwap(&char1, &char2);
    printf("After calling the character swap, the values are now: \n");
    printf("First char = %c\n", char1);
    printf("Second char = %c\n", char2);
    printf("\n");

    return 0;
}