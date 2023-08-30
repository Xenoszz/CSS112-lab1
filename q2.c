#include <stdio.h>
#include <math.h>

// ข้อ2
int main() {
    double numbers[] = {2.25,4.16,6.17,7.18,6.19},product = 1.0;
    for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){
         product *= numbers[i];
    }
    double mean = pow(product, 1.0 / (sizeof(numbers) / sizeof(numbers[0])));
    printf("Geometric Mean of 2.25, 4.16, 6.17, 7.18, 6.19: %.4f\n",mean);
    return 0;
}