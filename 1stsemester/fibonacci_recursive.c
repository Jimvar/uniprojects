#include <stdio.h>

int Fibonacci(int element);

int main(){
    int stoixeio;
    printf("Poio Fibonacci stoixeio thelete?\n");
    scanf("%d", &stoixeio);
    printf("Fibo[%d] = %d\n", stoixeio, Fibonacci(stoixeio));
    return 0;

}

int Fibonacci(int element){
    if(element == 1 || element == 2){
        return 1;
    }
    else{
        return (Fibonacci(element-1) + Fibonacci(element-2));
    }
}