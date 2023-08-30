#include <stdio.h>
#include <math.h>
// // ข้อ1
// int main(){
//     char strn[100] = {'@', '#', '&', '+', '-','*','/'};
//     for (int i =1; i <8; ++i){printf("%c = %x\n",strn[i],strn[i]);}
//     return 0;
// }
 
 // ข้อ2
// int main() {
//     double numbers[] = {2.25,4.16,6.17,7.18,6.19},product = 1.0;
//     for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){
//          product *= numbers[i];
//     }
//     double mean = pow(product, 1.0 / (sizeof(numbers) / sizeof(numbers[0])));
//     printf("Geometric Mean of 2.25, 4.16, 6.17, 7.18, 6.19: %.4f\n",mean);
//     return 0;
// }

// //ข้อ3
// int main(){
//     float a = 2.50, b = 1.30;
//     printf("Before swapping, first number is %.2f and second number is %.2f\n",a,b);
//     printf("after swapping, %.2f and second number %.2f",b,a);
// }

// //ข้อ4
// int main() {
//     double numbers[] = {2.0, 4.0, 6.0, 8.0, 10.0},sum = 0.0;
//     int n = sizeof(numbers) / sizeof(numbers[0]);
//     for (int i = 0; i < n; i++) {
//         sum += 1.0 / numbers[i];
//     }
//     double ans = n / sum;
//     printf("Harmonic Mean off 2.0, 4.0, 6.0, 8.0, 10.0: %.3f\n",ans);
//     return 0;
// }

// //ข้อ5
// int main(){
//     float a = 8.3, b = 1, c = -2.6,r1,r2;
//      float discriminant = b*b-4*a*c;
//     if (discriminant > 0) {
//         r1 = (-b + sqrt(discriminant)) / (2 * a);
//         r2 = (-b - sqrt(discriminant)) / (2 * a);
//     } 
//     else {
//         printf("error");
//     }
//     printf("Discriminant: %.3f\n", discriminant);
//     printf("Root#1: %.3f and Root#2 = %.3f" , r1,r2);
//     return 0;
// }
