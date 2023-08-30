#include <stdio.h>
#include <math.h>
//ข้อ4
int main() {
    double numbers[] = {2.0, 4.0, 6.0, 8.0, 10.0},sum = 0.0;
    int n = sizeof(numbers) / sizeof(numbers[0]);
    for (int i = 0; i < n; i++) {
        sum += 1.0 / numbers[i];
    }
    double ans = n / sum;
    printf("Harmonic Mean off 2.0, 4.0, 6.0, 8.0, 10.0: %.3f\n",ans);
    return 0;
}
