#include <stdio.h>
#include <math.h>

#define PI 3.14149265
#define DEG_TO_RAD(angle_in_degrees) ((angle_in_degrees) * PI / 180.0)

int main(){
    double angle = 60.0;
    printf("%f, %f, %f\n", cos(DEG_TO_RAD(angle)), sin(DEG_TO_RAD(angle)), tan(DEG_TO_RAD(angle)));
    return 0;
}