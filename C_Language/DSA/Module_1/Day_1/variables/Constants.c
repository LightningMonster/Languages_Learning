/*Constants
Immutable values defined using const or #define.*/

#include <stdio.h>

#define PI 3.14159 // Macro constant

int main() {
    const int constantVar = 50; // Constant variable
    printf("Constant Variable: %d\n", constantVar);
    // constantVar = 100; // Error: Assignment to const variable is not allowed
    printf("Value of PI: %f\n", PI);
    // PI = 3.15; // Error: PI is not modifiable
    return 0;
}