#include <stdio.h>

void soma(int* num, int a, int b) {
    *num = a + b;
}

int main() {
    int num = 0;
    int a = 50;
    int b = 50;
    soma(&num, a, b);
    printf("A soma de a + b fica: %d ", num);

}