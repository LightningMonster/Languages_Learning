/*Static Variables
Retain their value between function calls. Default value is zero.
variable is accessible only in this file, even though it is global.
If count were a regular local variable, it would reset to 0 each time the function is called.*/

#include <stdio.h>

void counter() {
    static int count = 0; // Static variable
    count++;
    printf("Count: %d\n", count);
}

int main() {
    counter(); // Output: Count: 1
    counter(); // Output: Count: 2
    counter(); // Output: Count: 3
    return 0;
}
