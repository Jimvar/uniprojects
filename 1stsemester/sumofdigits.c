#include <stdio.h>

int sumofdig(long long int digit);

int main(){
    long long int digit;
    printf("Give a number: ");
    scanf("%lld", &digit);
    printf("The sum of the digits is: %d\n", sumofdig(digit));
}

int sumofdig(long long int digit){
    int sum = 0;
    while(digit!=0){
        sum += digit%10;
        digit /= 10;
    }
    return sum;
}