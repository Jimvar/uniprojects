#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main(){
    float radius, height;

    printf("Give radius and height\n");
    scanf("%f%f", &radius, &height);
    float E = PI * radius * (sqrt(radius*radius + height*height) + radius);
    printf("The emvadon is: %f\n", E);

}