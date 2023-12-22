#include <stdio.h>
#include <math.h>

int main() {
    float degree, radian, tangent;
    printf("Enter an angle in degrees: ");
    scanf("%f", &degree);
    
    radian = degree * (M_PI / 180.0);
    tangent = tan(radian);
    printf("provided angle in radian = %.2f\ntangent of provided angle = %.2f\n", radian, tangent);

    return 0;
}
