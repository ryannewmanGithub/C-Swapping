#include <stdio.h>

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

}