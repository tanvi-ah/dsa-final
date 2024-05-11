// Ackermann Function
#include <stdio.h>

int ackFunction(int num1, int num2) {
    if (num1 == 0) {
        return num2 + 1;
    } else if (num1 > 0 && num2 == 0) {
        return ackFunction(num1 - 1, 1);
    } else if (num1 > 0 && num2 > 0) {
        return ackFunction(num1 - 1, ackFunction(num1, num2 - 1));
    }
}

int main() {
    int x;
    x = ackFunction(2, 3);
    printf("The Ackermann Function is: %d", x);
    return 0;
}
