#include <stdio.h>

#define g 9.81

float ypologismosv();
float ypologismoss();


int main(){
    float apotv = ypologismosv(1);
    float apots = ypologismoss(1);
    printf("For 1 second: velocity %.2f, space %.2f\n", apotv, apots);
    apotv = ypologismosv(5);
    apots = ypologismoss(5);
    printf("For 5 second: velocity %.2f, space %.2f\n", apotv, apots);
}

float ypologismosv(int t){
    return(g*t);
}

float ypologismoss(int t){
    return(0.5*g*t*t);
}