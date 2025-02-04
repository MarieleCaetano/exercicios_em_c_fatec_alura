#include <stdio.h>



int soma(int* nums, tam) {
    int total = 0;
    for(int i = 0; i < tam; i++) {
        total += nums[i];
    }
    return total;

}
int main() {
    int nums[3];
    nums[0] = 10;
    nums[1] = 20;
    nums[2] = 30;
    int total = soma(nums, 3);

    printf("o tamanho é: 3 \n e a soma total é: %d \n", total);
}