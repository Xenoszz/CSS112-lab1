#include <stdio.h>
#include <math.h>

//ข้อ5
int main(){
    float a = 8.3, b = 1, c = -2.6,r1,r2;
     float discriminant = b*b-4*a*c;
    if (discriminant > 0) {
        r1 = (-b + sqrt(discriminant)) / (2 * a);
        r2 = (-b - sqrt(discriminant)) / (2 * a);
    } 
    else {
        printf("error");
    }
    printf("Discriminant: %.3f\n", discriminant);
    printf("Root#1: %.3f and Root#2 = %.3f" , r1,r2);
    return 0;
}
