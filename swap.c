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