/*Static Variables
Retain their value between function calls. Default value is zero.*/

#include<stdio.h>

int main(){
    static int x = 10; // Static variable
    printf("%d\n", x); // Output: 10
    x = 20;
    printf("%d\n", x); // Output: 20
    return 0;
}